#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, p=0, q=0, aux=0;
  cin >> n;
    
  int levels[n]={};
    
  cin >> p;

  for(int i=0; i<p; i++){
    cin >> aux;
    levels[aux-1]=1;
  }
    
  cin >> q;
    
  for(int i=0; i<q; i++){
    cin>>aux;
    levels[aux-1]=1;
  }
    
  aux=1;
  
  for(int i=0; i<n; i++){
    if(levels[i]==0){
      aux=0;
      break;
    }
  }

  if(aux){
    cout << "I become the guy.";
  }else{
    cout << "Oh, my keyboard!";
  }
    
  return 0;
}