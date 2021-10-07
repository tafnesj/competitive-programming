#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n=0; cin >> n;
  vector<int>nums(n+1);
 
  for(int i=1; i<=n; i++){
    cin >> nums.at(i);
  }
 
  // Sum prefix
  for(int i=1; i<=n; i++){
    nums.at(i)+=nums.at(i-1);
  }
 
  int  q=0; cin >> q;
  while(q--){
    int i=0, j=0;
    cin >> i >> j;
    cout << nums.at(j+1)-nums.at(i)<< "\n";
  }
  
  return 0;
}
 