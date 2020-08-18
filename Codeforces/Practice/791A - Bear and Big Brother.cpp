#include <bits/stdc++.h>
using namespace std;

int main(){
  int a=0, b=0, i=0;
  cin >> a >> b;
  
  while(a<b){
    a*=3;
    b*=2;
    i++;
  }
  
  if(a==b){
    cout << i+1;
  }else{
    cout << i;
  }
  
  return 0;
}