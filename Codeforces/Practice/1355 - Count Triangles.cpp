#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int a=0, b=0, c=0, d=0;
  cin >> a >> b >> c >> d;
  lli tamMax=1e6+5, triangles=0;;
  vector<lli>prefix(tamMax);

  for(int i=a; i<=b; i++){
    prefix[i+b]++;
    prefix[i+c+1]--;
  }

  for(int i=1; i<tamMax; i++) prefix[i]+=prefix[i-1];
  for(int i=1; i<tamMax; i++) prefix[i]+=prefix[i-1];

  for(int i=c; i<=d; i++){
    triangles+=prefix[tamMax-1]-prefix[i];
  }

  cout << triangles << "\n";
  return 0;
}
