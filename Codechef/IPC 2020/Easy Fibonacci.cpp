#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  
  while(t--){
    long long int n; cin >> n;
    long long int z=1;
    int count=1;

    // Log2(n)
    while(1){
      z*=2;
      if(z>n){
        break;
      }
      count++;
    }

    long long int y=1ll<<(count-1);
    vector<long long int>fibo(2);

    fibo[0]=0;
    fibo[1]=1;

    for(int i=2; i<=60; i++){
      fibo.push_back(fibo[i-1]+fibo[i-2]);
    }

    for(int i=0; i<=60; i++){
      fibo[i]%=10;
    }

    cout << fibo[(y-1)%60] <<"\n";
  }
  return 0;
}