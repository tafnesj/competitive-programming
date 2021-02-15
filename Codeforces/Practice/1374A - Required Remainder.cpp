#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int t=0; cin >> t;
  
  while(t--){
    lli x=0, y=0, n=0;
    cin >> x >> y >> n;
    lli multiplo=0;

    multiplo=n-(n%x);

    if(multiplo+y<=n){
      cout << multiplo+y << "\n";
    }else{
      cout << multiplo-(x-y) << "\n";
    }

  }

  return 0;
}