#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long sum=0, subA=0, subB=0;
    int n=0, mod=1e9+7;
    cin>> n;
    
    for(int i=1; i<=n; i++){
      int aux = 0;
    
      if(i%2==1){
        (aux+=subB+1)%mod;
        aux%=mod;
        (subA+=aux)%mod;
        subA%=mod;
        (sum+=aux)%mod ;
      }
      else{
        (aux+=subA+1)%mod;
        aux%=mod;
        (subB+=aux)%mod;
        subB%=mod;
        (sum+=aux)%mod;
      }
    }
    
    cout<< sum%mod << '\n';
    return 0;
}