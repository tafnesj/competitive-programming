#include <bits/stdc++.h>
using namespace std;

int n=0, B=0, M=0;
int dp[55][50005];
int volumenes[55];
int infinity = -1e9;


int solve(int indice, int volumen_actual){
  
  // Condiciones de parada
  if(volumen_actual<0) return infinity; // Cuando el volumen<0
  if(volumen_actual>M) return infinity; //Cuando se supera el máximo volumen
  if(indice>=n) return volumen_actual;

  // Memorización
  if(dp[indice][volumen_actual]!=infinity) return dp[indice][volumen_actual];

  dp[indice][volumen_actual]=max(solve(indice+1,volumen_actual-volumenes[indice]),solve(indice+1,volumen_actual+volumenes[indice]));

  return dp[indice][volumen_actual];
}

int main(){
    cin >> n;

    // Cambios de volumen
    for(int i=0; i<n; i++){
      cin >> volumenes[i];
    }

    // Volumen inicial, volumen máximo
    cin >> B >> M;

    // Inicializar todo el arreglo en (infinity)
    for(int i=0; i<55; i++){
      for(int j=0; j<50005; j++){
        dp[i][j]=infinity;
      }
    }  

    solve(0,B);

    if(dp[0][B]==infinity)
      cout << -1 << "\n";
    else
      cout << dp[0][B] << "\n";

  return 0;
}