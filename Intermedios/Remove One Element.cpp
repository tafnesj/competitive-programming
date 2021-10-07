#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

#define endl '\n'
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

lli inf=1e9+7;

signed main(){__
  int n=0; cin >> n;
  vector<int>integers(n);
  for(auto &x:integers) cin >> x;
  vector<int>prefijos(n);
  vector<int>sufijos(n);

  int aux=1, maxi=1;
  prefijos.at(0)=1;

  for(int i=0; i<integers.size()-1; i++){
    if(integers.at(i)<integers.at(i+1)){
      aux++;
    }
    else{
      maxi=max(maxi,aux);
      aux=1;
    }
    prefijos.at(i+1) = aux;
  }

  maxi=max(maxi,aux);

  aux=1;
  sufijos.at(n-1)=1;

  for(int i=integers.size()-1; i>=1; i--){
    if(integers.at(i-1) < integers.at(i))
      aux++;
    else
      aux=1;
    sufijos[i-1]=aux;
  }

  for(int i=1; i<integers.size()-1; i++){
    if(integers.at(i+1)>integers.at(i-1)){
      maxi=max(maxi,(prefijos.at(i-1)+sufijos.at(i+1)));
    }
  }

  // for(int i=0; i<n; i++){
  //   cout << "prefijos " << endl;
  //   cout << prefijos.at(i) << " ";
  // }

  // cout << endl;

  // for(int i=0; i<n; i++){
  //   cout << "sufijos " << endl;
  //   cout << sufijos.at(i) << " ";
  // }

  cout << maxi << endl;
  return 0;
}