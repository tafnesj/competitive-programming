#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n=0, m=0; 
  cin >> n >> m;
  vector<int>candies(n);
  int last_pos=0, max_rounds=0;

  for(auto &x:candies){
    cin >> x;
    x=ceil(x/(m*1.0));
  }
  
  max_rounds=(max_element(candies.begin(), candies.end())-candies.begin());
  max_rounds=candies.at(max_rounds);

 
  for(int i=0; i<n; i++){
    if(candies.at(i)==max_rounds) last_pos=i;
  }
    
  cout << last_pos+1 << "\n";
  return 0;
}