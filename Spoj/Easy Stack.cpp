#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

signed main(){__
  int t=0; cin >> t;
  stack<int>pila;

  while(t--){
    int n=0; cin >> n;
    // Cases
    if(n==1){
      int x=0; cin >> x;
      pila.push(x);
    }else if(n==2){
     if(!pila.empty()){
       pila.pop();
     }
    }else if(n==3){
      if(!pila.empty()){
       cout << pila.top() << endl;
     }else{
       cout << "Empty!\n";
     }
    }
  }

  return 0;
}