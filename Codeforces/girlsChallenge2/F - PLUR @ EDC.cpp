#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t=0, n=0, change=0;
  string event;
  cin >> t >> event;
  n = event.length();
    
  for(int i=0; i<n-1; i++){
    if(event[i]==event[i+1])
      change++;
  }
    
  cout << change << endl;
  return 0;
}