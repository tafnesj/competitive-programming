#include <bits/stdc++.h> 
using namespace std;

int main(){
  int n=0, cOne=0, cZero=0;
  cin >> n;
  string str;
  cin >> str;

  for(int i=0; i<n; i++){
    if(str[i]=='z'){
      cZero++;
    }else if(str[i]=='n'){
      cOne++;
    }
  }

  for(int i=0; i<cOne; i++){
    cout << 1 << " ";
  }

  for(int i=0; i<cZero; i++){
    cout << 0 << " ";
  }

  return 0;
}