#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, h=0, count=0;
  cin >> n >> h;
  int str[n];
  
  for(int i=0; i<n; i++){
    cin >> str[i];
    if(str[i]>h){
      count+=2;
    }else{
      count+=1;
    }
  }
  
  cout << count;
  return 0;
}