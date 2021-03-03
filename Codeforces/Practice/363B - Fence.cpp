#include <bits/stdc++.h>
using namespace std;

int minSum(int &n, int &k, vector<int>&h){
  int min_sum=1e9, start=0, window=0;
  int i=0;

  if(n==k) return 1;
  
  for(int x=0; x<k; x++)
    window+=h.at(x);

  for(i=k; i<n; i++){
    if(min_sum>window){
      min_sum=window;
      start=(i-k)+1;
    }
    window+=h.at(i)-h.at(i-k);
  }
  // Check last window
  if(min_sum>window){
      min_sum=window;
      start=(i-k)+1;
  }
  return start;
}

int main(){
  int n=0, k=0;
  cin >> n >> k;
  vector<int>h(n);

  for(auto &x:h) cin >> x;
  cout << minSum(n,k,h) << "\n";

  return 0;
}