#include <bits/stdc++.h>
using namespace std;

// Calcular GCD
int gcd(int a, int b){
  int dividendo=0;
  int divisor=0;

  if(a>=b){
    dividendo=a;
  }else{
    dividendo=b;
  }

  if(a<=b){
    divisor=a;
  }else{
    divisor=b;
  }

  int count=0;
  
  while(divisor!=0){
    count=dividendo%divisor;
    dividendo=divisor;
    divisor=count;
  }

  return dividendo;
}

int main(){
  int t=0; cin >> t;

  while(t --){
    int n=0; cin >> n;
    int a[n];
    
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
        
    int count = 0;
    int minim = a[1];

    for(int i=2; i<=n; i++){
      minim = gcd(minim,a[i]);
      if(minim!=1){
        count++;
      }     
    }

    if(minim>1){
      cout << -1 << "\n";
    }else{
      cout << 0 << "\n";
    }
  }

  return 0;
}