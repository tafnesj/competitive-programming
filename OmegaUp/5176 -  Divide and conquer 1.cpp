#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

// Paradigma: Divide y vencerás

lli sumaMaximaCruzada(lli A[], lli izquierda, lli mitad, lli N){ 
  // Elementos: Izquierda -> Mitad 
  lli suma=0, izq_suma=0; 
  for(int i=mitad; i>=izquierda; i--){ 
    suma+=A[i]; 
    if(suma>izq_suma){
      izq_suma=suma;
    } 
  } 
  
  // Elementos: Mitad -> Derecha 
  lli der_suma=0;
  suma=0;
  for(int i=mitad+1; i<=N; i++){ 
    suma+=A[i]; 
    if(suma>der_suma){
      der_suma=suma;
    } 
  } 

  return max({izq_suma+der_suma, izq_suma, der_suma}); 
}

lli sumaMaximaSubarreglo(lli A[], lli izquierda, lli N){ 
  // Caso base: 1 elemento 
  if(izquierda==N){
    return A[izquierda];
  }

  lli mitad=(izquierda+N)>>1; 

  return max({
    // Suma máxima de izquierda -> mitad
    sumaMaximaSubarreglo(A, izquierda, mitad), 
    // Suma máxima de mitad -> derecha
    sumaMaximaSubarreglo(A, mitad+1, N), 
    // Suma máxima de cruza por la mitad
    sumaMaximaCruzada(A, izquierda, mitad, N)
  }); 
} 
  
int main(){ 
  lli N=0; cin >> N;
  lli A[N];
  int contador_negativos=0;
  
  for(int i=0; i<N; i++){
    cin >> A[i];
    if(A[i]<0){
      contador_negativos++;
    } 
  }

  // Caso: Todos los elementos son negativos
  if(contador_negativos==N){
    cout << *max_element(A,A+N);
    return 0;
  }

  lli maxima_suma=sumaMaximaSubarreglo(A, 0, N-1); 
  cout << maxima_suma;
  
  return 0; 
} 