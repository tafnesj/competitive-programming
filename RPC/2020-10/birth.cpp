#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0;
  set<string> birth;
  string aux; 

  while(n--){
    cin >> aux;
    birth.insert(aux);
  }

  cout << birth.size() << '\n';

  return 0;
}

