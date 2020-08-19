#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, count=0;
  cin >> n;

  while(n--){
    int p=0, q=0;
    cin >> p >> q;
    if((q-2)>=p){
      count++;
    }
  }

  cout << count;
  return 0;
}