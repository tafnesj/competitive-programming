#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  lli t=0; cin >> t;

  while(t--){
    lli x=0, y=0, z=0;
    cin >> x >> y >> z;
        
    if(x>y) swap(x,y);
    if(x>z) swap(x,z);
    if(y>z) swap(y,z);
    
    if(y==z){
      cout << "YES\n";
      cout << x << " " << x << " " << z << "\n";
    }
    else
      cout << "NO\n";
  }
  return 0;
}