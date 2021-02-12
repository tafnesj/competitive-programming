#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;
  
  while(t--){
    int n=0; cin >> n;
    int ball=0;
    map<int,int>balls;

    for(int i=0; i<n; i++){
      cin >> ball;
      balls[ball]++;
    }

    int max_color=0;

    for(auto &x:balls) max_color=max(max_color,x.second);
    cout << max_color << "\n"; 
  } 
  
  return 0;
}