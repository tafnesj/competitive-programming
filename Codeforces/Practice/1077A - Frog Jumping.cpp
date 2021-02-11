#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int t=0; cin >> t;
  lli final_pos = 0;

  while(t--){
    lli a=0, b=0, k=0;
    cin >> a >> b >> k;
    
    final_pos = ((k-(k/2))*a)-((k/2)*b); 
    cout << final_pos << "\n";
  }

  return 0;
}