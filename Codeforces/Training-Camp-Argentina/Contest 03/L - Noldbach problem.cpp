#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0, k=0, aux=0, count=0;
    cin >> n >> k;
    int prime[1005];

    for(int i=2; i<1000; i++){
      for(int j=1; j<=i; j++){
        if(i%j==0){
          count++;
        }
      }
      
      if(count==2){
        prime[aux]=i;
        aux++;
      }
      count=0;
    }
    
    count = 0;
    
    for(int i=0; prime[i]<=n; i++){
      for(int j=0; j<i; j++){
        if(prime[i]==prime[j] + prime[j+1]+1){
          count++;
        }
      }
    }
    
    if(count>=k){
      cout << "YES" << '\n';
    }
    else if(count<k){
      cout << "NO" << '\n';
    }
return 0;
}