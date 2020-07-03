#include <bits/stdc++.h>
using namespace std;

int main(){
     
  int n, tam=0;
  int a[100]={};
  int aux[1500]={};
  int dif[100]={};
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int i=n-1; i>= 0; i--){
    if(aux[a[i]]==0){
      dif[tam] = a[i];
      tam++;
      aux[a[i]] = 1;
    }
  }

  cout << tam << endl;

  for(int i=tam-1; i>=0; i--){
    cout << dif[i];
    if (i == 0){
      cout << endl;
    }else{
      cout << " ";
    }
  }
  
  return 0;
}
 