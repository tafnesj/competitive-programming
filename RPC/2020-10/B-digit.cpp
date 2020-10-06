#include <bits/stdc++.h>
using namespace std;

int main(){
  int a=0, b=0, digit=0, aux=0, count=0;
  cin >> a >> b >> digit;

  for(int i=a; i<=b; i++){
    aux = i;
    while(aux>0){
      if(aux%10 == digit){
        count ++;
      }
      aux/=10;
    }
  }

  cout << count << '\n';
  return 0;
}