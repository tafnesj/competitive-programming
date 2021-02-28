#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;
  while(t--){
    int n=0; cin >> n;
    int ones=0, twos=0;

    for (int i=0; i<n; i++){
      int a=0; cin >> a;
      (a==1) ? ones++ : twos++;
    }

    if(ones%2==0){
      if(n%2==0||(n%2!=0 && ones>0)) cout << "YES" << "\n";
      else cout << "NO" << "\n";
    }else cout << "NO" << "\n";
  }
  return 0;
}