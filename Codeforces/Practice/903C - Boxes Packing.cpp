#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int n=0; cin >> n;
  map<lli,int>box;

  for(int i=0; i<n; i++){
    lli side_box=0;
    cin >> side_box; 
    box[side_box]++;
  }
  
  int max_repeat=0;
  for(auto &x:box) max_repeat=max(max_repeat,x.second);

  cout << max_repeat;

  return 0;
}