#include <bits/stdc++.h>
using namespace std;

int main(){
  string aux;
  int q=0, p=0;
  map<int,int>top_list;
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>sequence;

  while(cin >> aux){
    if(aux == "#") break;
    cin >> q >> p;
    top_list[q]=p;
    sequence.push({p,q});
  }

  int k=0; cin >> k;

  while(k--){
    pair<int,int>top_now;
    top_now=sequence.top(); 
    sequence.pop();
    cout << top_now.second << "\n";
    top_now.first+=top_list[top_now.second];
    sequence.push(top_now);
  }
  return 0;
}