#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int t=1; cin >> t;
  
  while(t--){
    int max_rojo=0, max_azul = 0;
    vector<int>entrada(105);
    
    int n=0; cin >> n;
    for(int i=1; i<=n; i++){
      cin >> entrada.at(i);
      entrada.at(i)+=entrada.at(i-1);
      max_rojo=max(entrada.at(i),max_rojo);
    }

    int m=0; cin >> m;
    for(int i=1; i<=m; i++){
      cin >> entrada.at(i);
      entrada.at(i)+=entrada.at(i-1);
      max_azul=max(entrada.at(i),max_azul);
    }
    
    cout << max_azul+max_rojo << "\n";
  }
}