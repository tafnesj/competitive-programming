#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, k=0; 
  cin >> n >> k;
  int valid_participation=0;
  vector<int>participations(n);

  for(auto &x:participations) cin >> x;

  for(int i=0; i<n; i++)
    if(k<=(5-participations.at(i))) 
      valid_participation++;
  
  cout << valid_participation/3 << "\n";

  return 0;
}