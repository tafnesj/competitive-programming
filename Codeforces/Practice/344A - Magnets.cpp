#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, count=1;
  cin >> n;
  string str, aux;

  while(n--){
    cin >> aux;
    str+=aux;
  }
  
  for(int i=0; i<str.size(); i++){
    if(str[i]==str[i+1]){
      count++;
    }
  }
  
  cout << count;
  return 0;
}