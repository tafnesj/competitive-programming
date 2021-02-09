#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int t=0; cin >> t;
  while(t--){
    
    lli a=0; // Costo dona (menudeo).
    lli b=0; // Número de donas en una caja.
    lli c=0; // Costo de la caja de donas.
    cin >> a >> b >> c;

    // Salida 1: La tienda 01 es más barata
    if(a<c){ // 1 Siempre será válido si una caja es más cara que una dona.
      cout << 1 << " ";
    }else{ // Por ende, cualquier otro caso no existiría forma
      cout << -1 << " ";
    }

    // Salida 2: La tienda 02 es más barata
    if(c<(a*b)){ // Si el costo de la caja es más cara que comprarlas de manera individual
      cout << b << " ";
    }else{
      cout << -1 << " ";
    }
    
    cout << "\n";
  }
  
  return 0;
}