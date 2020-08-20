#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, k=0, p=0, sum=0;
  cin >> n >> k;
  
  for(p=1; p<=n; p++){
    sum = sum +(5*p);
    
    if(sum+k == 240){
      cout << p;
      break;
    }
    
    if(sum+k > 240){
      cout << p-1;
      break;
    }
  }
  
  if(sum+k < 240){
    cout << n;
  }
  
  return 0;
}