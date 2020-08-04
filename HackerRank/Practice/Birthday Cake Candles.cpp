#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, max=0, cont=0;
  cin >> n;
  int a[n];

  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<n;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
  for(int i=0;i<n;i++){
    if(a[i]==max){
      cont++;
    }
  }
  
  cout << cont;
  return 0;
}