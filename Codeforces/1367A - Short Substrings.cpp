#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t=0;
  cin >> t;

  while(t--){
    string aux;
    cin >> aux;
      
    if(aux.size()==2){
      cout << aux;
    }else{
      cout << aux[0];
      for(int i=1; i<aux.size(); i++){
        if(aux[i]!=aux[i+1]){
          cout << aux[i];
        }else{
          cout << aux[i];
          i++;
        }
      }
    }     
    cout << endl;
  }

  return 0;
}