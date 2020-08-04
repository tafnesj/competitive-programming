#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, cont=0;
  cin >> n;
  int h[n];
  int aux[n];
    
  for(int i=0; i<n; i++){
    cin>>h[i]>>aux[i];
  }
        
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(h[i]==aux[j]){
        cont++;   
      }
    }
  }
    
  cout << cont;
  return 0;
}