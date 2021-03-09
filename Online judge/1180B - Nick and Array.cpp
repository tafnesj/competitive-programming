/* 
    ------------------------------------------------------
    Codeforces 1180B | Nick and Array
    ------------------------------------------------------
    Consideraciones:
    * Cambiar todos los elementos '0' con la operación.
    * Considerar tamaño par e impar del arreglo.
    * Siempre es conveniente cambiar a negativos.
    * Si el tamaño es impar, es conveniente cambiar 
      el mayor a positivo.
    * Considerar los valores absolutos de la operación.
    
    Entrada 
    * n -> ( 1 <= n <= 10^5 )
    * a[n] -> ( -10^6 <= ai <= 10^6 )
    
    Salida
    * Maximizar el producto de los elementos del arreglo.
    ------------------------------------------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, aux=0; cin >> n;
  vector<int>a(n);

  for(int i=0; i<n; i++){
    cin >> aux;
    a[i]=aux;
  }

  for(int i=0; i<n; i++){
    // Si el número es positivo, se cambia a negativo
    if(a[i]>=0){
      // Aplicación de la operación
      a[i]=((-1)*(a[i])-1);
    }
  }
  // Tamaño n par
  if(n%2==0){
    for(int i=0; i<n; i++){
      cout << a[i] << " ";
    }
  }else{
    // Obtener posición del mínimo elemento (izquierda del plano)
    int pos = min_element(a.begin(), a.end())-a.begin();
    // Convierte el mayor abs(ai) en positivo
    a[pos]=((-1)*(a[pos])-1);
    for(int i=0; i<n; i++){
      cout << a[i] << " ";
    }
  }
  return 0;
}


