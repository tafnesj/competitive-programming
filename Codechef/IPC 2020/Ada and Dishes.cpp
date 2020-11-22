#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;

  while(t--){
    int n=0; cin >> n;
    int c[n];

    for(int i=0; i<n; i++){
      cin >> c[i];
    }

     // Sort Array
    sort(c,c+n);

    int suma=0;

    for(int i=0; i<n-1; i++){
      suma+=c[i];
    }

    int maxi= *max_element(c,c+ n);

    if(suma<=maxi){
      cout << maxi << "\n";
    }else{
      cout << min(max(maxi+c[0],suma-c[0]), suma) << "\n";
    }
    
  }

  return 0;
}