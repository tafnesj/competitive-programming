#include <bits/stdc++.h>
using namespace std;

int main(){
  int k=0, n=0, w=0, pay=0;
  cin >> k >> n >> w;
  pay=k;

  for(int i=2; i<w+1; i++){
    pay+=(k*i);
  }
    
  if(pay<n){
    cout << "0";
  }else{
    pay-=n;
    cout << pay;
  }
    
  return 0;
}