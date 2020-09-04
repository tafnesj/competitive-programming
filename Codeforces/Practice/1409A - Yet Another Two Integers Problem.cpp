#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0;
  cin >> t;

  while(t--){
    int a=0, b=0;
    int aux=0, count=0;
    cin >> a >> b;
    aux=abs(a-b);
    
    if(a==b){
      cout << 0 << endl;
    }else if(aux%10==0){
      cout << aux/10 << endl;
    }else{
      cout << (aux/10)+1 << endl;
    }
  }
    
  return 0;
}

