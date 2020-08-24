#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, cA=0, cB=0, cC=0;
  cin >> n;
  vector<pair<int,int>>child;

  for(int i=1; i<=n; i++){
    int c=0;
    cin >> c;
    child.push_back({c,i});
  }
  sort(child.begin(), child.end());

  for(int i=0; i<n; i++){
    if(child[i].first==1){
      cA++;
    }else if(child[i].first==2){
      cB++;
    }else if(child[i].first==3){
      cC++;
    }
  }

  int m=min({cA, cB, cC});
  cout << m << endl;

  if(cA<0 || cB<0 || cC<0){
    cout << 0;
  }else{
    for(int i=0; i<m; i++){
        cout << child[i].second << " " << child[i+cA].second << " " << child[i+cA+cB].second << endl;  
    }
  }

  return 0;
}