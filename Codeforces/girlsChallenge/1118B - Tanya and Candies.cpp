#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
  int n=0, e=0, o=0, cont=0;
  cin >> n;
  int a[n];
  
  for(int i=0; i<n; ++i){
    cin >> a[i];
    if(i%2==0){
      e+=a[i];  
    }else
      o+=a[i];
  }
 
  for(int i=0; i<n; ++i){
    if(i%2==0){
      e-=a[i];    
    }else{
      o-=a[i];
    }
 
    if(e==o){
      cont++;
    }
    
    if(i%2==0){
      o+=a[i];
    }else{
      e+=a[i];
    }
  }
    cout << cont;
    return 0;
}