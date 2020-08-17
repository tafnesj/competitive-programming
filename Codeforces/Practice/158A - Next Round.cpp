#include <bits/stdc++.h> 
using namespace std;

int main(){
  int n=0, k=0, count=0; 
  cin >> n >> k;
  int str[n];
  
  for(int i=0; i<n; i++){
      cin>>str[i];
  }

  for(int i=0; i<n; i++){
    if(str[i]>0 && str[i]>=str[k-1]){
      count++;
    }
  }

  cout << count;
  return 0; 
}