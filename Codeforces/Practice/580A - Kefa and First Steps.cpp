#include <bits/stdc++.h>
using namespace std;

int main(){
  int count=0, aux=0;
  int n=0; cin >> n;
  vector<int>a(n);

  for(auto &x:a) cin >> x;
  a.push_back(0);

  for(int i=0; i<n; i++){
    if(a.at(i)<=a.at(i+1)){
      aux++;
    }else{
      count=max(count,aux);
      aux=0;
    }
  }

  cout << count+1 << "\n";

  return 0;
}