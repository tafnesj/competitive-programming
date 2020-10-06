#include <bits/stdc++.h>
using namespace std;

int main(){
  int a=0, b=0, digit=0, count=0;
  cin >> a >> b >> digit;
  string aux;

  for(int i=a; i<=b; i++){
    aux = to_string(i);
    for(int j=0; j<aux.size(); j++){
      if(aux[i]-'0' == digit){
        count++;
      }
    }
  }

  cout << count << '\n';

  return 0;
}