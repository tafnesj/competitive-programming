#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, acum=0; cin >> n;
  int half=0, num_coins=0;
  vector<int>coins(n);

  for(auto &x:coins){
    cin >> x;
    half+=x;
  }

  half/=2;
  sort(coins.begin(),coins.end(),greater<int>());

  for(int i=0; i<n; i++){
    acum+=coins.at(i);
    if(acum<=half) num_coins++;
    else{
      cout << num_coins+1 << "\n";
      break;
    }
  }
  return 0;
}