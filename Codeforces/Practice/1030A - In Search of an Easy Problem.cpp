#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, aux=0;
  cin >> n;
  int str[(n*2)-1];
  
  
  for(int i=0; i<(n*2)-1; i++){
    cin >> str[i];
    if(str[i]==1){
      aux=1;
      break;
    }
    i++;
  }
  
  if(aux){
     cout << "HARD"; 
  }else{
      cout << "EASY";
  }
  
  return 0;
}