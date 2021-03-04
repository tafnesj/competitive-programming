#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

vector<int>parent;
vector<int>size_component;
 
struct edge{
  int to, from, weight;
  bool operator <(const edge x){
    return weight<x.weight;
  }
};
 
// Return represent element
int represent(int i){
  if(parent.at(i)==i){
    return i;
  }else{
    return parent.at(i)=represent(parent.at(i));
  }
}
 
// Join components
bool unionBySize(int u,int v){
  u = represent(u);
  v = represent(v);
 
  if(u==v){
    // Can't join because they're in this component
    return false;
  }else{
    if(size_component.at(u)<size_component.at(v)){
      // "U" always are the most high value
      swap(u,v);
    }
    // New represent
    parent.at(v)=u;
    // Change size of the component
    size_component.at(u)+=size_component.at(v);
  }
  // Can join
  return true;
}
 
int main(){
  vector<edge>edges;
  int num_vertices=0, num_edges=0;
  int to=0, from=0, weight=0; 
  lli total_weight=0;
  cin >> num_vertices >> num_edges; 
 
  // Resizes vectors
  parent.resize(num_vertices);
  size_component.resize(num_vertices,1);
 
  // In structure 
  for(int i=0; i<num_edges; i++){
    cin >> to >> from >> weight;
    to--; from--;
    edges.push_back({to,from,weight});
  }
 
  sort(edges.begin(), edges.end());
  iota(parent.begin(), parent.end(), 0);
 
  for(int i=0; i<num_edges; i++){
    if(unionBySize(edges.at(i).to,edges.at(i).from)){
      total_weight+=edges.at(i).weight;
    }
  }
 
  cout << total_weight;
  return 0;
} 