#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

signed main(){__
  int n=0, m=0, k=0;
  cin >> n >> m >> k;

  int l=0, r=n*m, middle=0;

  while(k<r){
    int aux=0;
    middle=(l+r)>>1;
    // Index
    for(int i=1; i<=n; i++){
      // Obtener el mínimo
      aux+=min(m,(middle/i));
    }
    // Considerar que k <= aux
    if(k<=aux){
      r=middle;
    }else{
      l=middle;
    }
  }

  cout << r << endl;
  return 0;
}