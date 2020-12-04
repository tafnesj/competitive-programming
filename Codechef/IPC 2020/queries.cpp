#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  // Caso base
  if(a==0) return b;
  
  return gcd(b%a,a);
}

int main(){
  int t=0; cin >> t;

  while(t--){
    int n=0, queries=0;
    cin >> n >> queries;

    // Arreglo de entrada
    int A[n];
    // Arreglos de acumulados
    int derGCD[n],izqGCD[n];

    //Acumulados GCD ->
    for(int i=0; i<n; i++){
      cin >> A[i];
      if(!i){
        derGCD[i]=A[i];
      }else{
        derGCD[i]=gcd(A[i],derGCD[i-1]);
      }
    }
        
    //Acumulados GCD <-
    for(int i=n-1; i>=0; i--){
      if(i==(n-1)){
        izqGCD[i]=A[i];
      }else{
        izqGCD[i]=gcd(A[i],izqGCD[i+1]);
      }
    }
    
    while(queries--){
      int left=0, right=0;
      cin >> left >> right;

      // Indexado
      left--; 
      right--;
      
      if(left==0){
        cout << izqGCD[right+1] << "\n";
        continue;
      }else{
        if(right==(n-1)){
          cout << derGCD[left-1] << "\n";
          continue;
        }else{
          cout<< gcd(derGCD[left-1],izqGCD[right+1]) << "\n";
        }
      }
    }
  }
  return 0;
}