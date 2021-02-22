#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>tree;
vector<int>distances;

void dfs(int source, int root_source, int actual_dist){
  // cout << source << "\n";
  for(auto neighbor:tree.at(source)){
    if(root_source==neighbor) continue;
    dfs(neighbor,source,actual_dist+1);
  }
  distances.at(source)=actual_dist;
}

int maxi(vector<int>permutation, int start, int ends){
  int value=0, pos=0;
  
  // Base cases
  if(start>=ends) return -1;

  // int pos = max_element(permutation.begin()+start, permutation.begin()+ends)-permutation.begin();
  // int value = *max_element(permutation.begin()+start, permutation.begin()+ends);

  for(int i=start; i<ends; i++){
    if(permutation.at(i)>value){
      value=max(value,permutation.at(i));
      pos=i;
    }
  }

  // Left
  int max_left = maxi(permutation, start, pos);
  // Right
  int max_right = maxi(permutation, pos+1, ends);


  // Adjacency List
  if(max_left!=-1){
    tree.at(value).push_back(max_left);
  }
  
  if(max_right!=-1){
    tree.at(value).push_back(max_right);
  }

  return(value);
}

int main(){
  int t=0; cin >> t;
  
  while(t--){
    int sz_permutation;
    cin >> sz_permutation;
    vector<int>permutation(sz_permutation);
    tree.resize(sz_permutation+1);
    distances.assign(sz_permutation+1,0);

    for(auto &x:permutation) cin >> x;

    int maxi_element = maxi(permutation,0,sz_permutation);

    // for(int i=0; i<=5; i++){
    //   for(auto &x:tree[i]) cout << x << " ";
    //   cout << endl;
    // }

    dfs(maxi_element,-1,0);
    
    for(int i=0; i<sz_permutation; i++) cout << distances.at(permutation[i]) << " ";
    cout << "\n";
    tree.clear();
  }

  return 0;
}