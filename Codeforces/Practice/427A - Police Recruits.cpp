#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0; cin >> n;
  int recruits=0, untreated=0;
  
  while(n--){
    int aux=0; cin >> aux;
    
    if(aux>0) recruits+=aux;
    else
      if(recruits<1) untreated++;
      else recruits--;
  }
  cout << untreated;
	return 0;
}