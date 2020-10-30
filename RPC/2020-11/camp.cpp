#include <bits/stdc++.h>
using namespace std;

bool check(int D, int s, int n, vector<int>&qProblems, vector<int>&pProblems){
  int count=0;
  multiset<int>aux;
  for(auto &c:qProblems)aux.insert(c);
  for(int i=0; i<pProblems.size(); i++){
    if(pProblems[i]>s)
      continue;
    // Que la suma no pase a S.
    int maxi_sum=s-pProblems[i];
    // Que la diferencia no pase a D.
    int max_dif=pProblems[i]+D;
    // Buscar el valor mínimo de los valores.
    maxi_sum=min(maxi_sum,max_dif);

    // Iterador.
    auto itr=aux.upper_bound(maxi_sum);
    if(itr==aux.begin())
      continue;
    itr--;
    // Sacar la distancia.
    if(abs(*itr-pProblems[i])<=D){
      /* Nota para Tafnes del futuro 
        Eliminar valor, se manda el iterador,
        de no ser así se eliminarían todas los
        valores recurrentes del valor.
      */
      aux.erase(itr);
      count++;
    }
  }
  // ¡Sí se pudo! :D
  if(count>=n)
    return true;

  // ¡No se pudo! :(
  return false;
}

int main(){
  int n=0, p=0, q=0, s=0;
  cin >> n >> p >> q >> s;
  vector<int>pProblems(p);
  vector<int>qProblems(q);
  vector<int>dif; 
  
  for(auto &c:pProblems)cin>>c;
  for(auto &c:qProblems)cin>>c;
  sort(pProblems.rbegin(), pProblems.rend()); 

  /* Binary Search 
     l+1 < r, l -> -1, r -> s+1.
  */

  int l=-1, r=s+1;

  // Mi función debe terminar con f(l)=0 y f(r)=1.
  while(l+1<r){
    int middle=(l+r)>>1;
    if(check(middle, s, n, qProblems, pProblems))
      // El valor se encuentra en r por la condición de f(r).
      r=middle;
    else
      // Si check retorna 0 entonces r nunca se mueve.
      l=middle;
  }

  if(r==(s+1))
    cout << "-1" << "\n";
  else
    cout << r << "\n";
  
  return 0;
}