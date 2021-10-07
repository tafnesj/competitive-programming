#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

signed main(){__
  int n=0; cin >> n;
  int k=0; cin >> k;

  vector<int>numbers(n);
  for(auto &x:numbers) cin >> x;
  sort(numbers.begin(),numbers.end());

  int l=1, middle=0;
  int r=k+numbers.at(n-1)+1;

  while(l<=r){
    int aux=0;
    middle=(l+r)>>1;
    for(int i=n/2; i<n; i++){
      if(numbers.at(i)>=middle)
        break;
      aux+=middle-numbers.at(i);
    }
    if(aux>k)
      r=middle-1;
    else
      l=middle+1;
  }
  cout << r << endl;
  return 0;
}