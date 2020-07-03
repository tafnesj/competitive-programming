#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n=0;
  cin>>n;
  int x[n];
    
  for(int i=0; i<=n; i++){
    cin >> x[i];
  }
    
  int h = abs(x[0] - x[n-1]);
  int aux=0, aux0=n-1, i, j;
  
  for(int i=0, j=i+1; i<=n-2, j<n; i++, j++){
    int aux1 = abs(x[i]-x[j]);
    if(aux1 < h){
      aux=i;
      aux0=j;
      h=aux1;
    }
  }
  
  cout << aux+1 << " " << aux0+1;
  return 0;
}