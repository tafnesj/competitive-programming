#include <bits/stdc++.h>
using namespace std;

int main(){
  int q=0; cin >> q;
  int counter_max=0;
  
  while(q--){
    long long int n=0;
    bool can=true;
    cin >> n;

    while(n!=1){
      if(n%5==0){
        n=(4*n)/5;
        counter_max++;
      }else if(n%3==0){
        n=(2*n)/3;
        counter_max++;
      }else if(n%2==0){
        n/=2;
        counter_max++;
      }else{
        can=false;
        break;
      }
    }

    if(can)
      cout << counter_max << "\n";
    else
      cout << -1 << "\n";
    
    counter_max=0;
  }
  
  return 0;
}