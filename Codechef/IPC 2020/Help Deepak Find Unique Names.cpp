#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;

  while(t--){
    int n=0; cin >> n;
    set<string>names;
    string name;

    for(int i=0; i<n; i++){
      cin >> name;
      names.insert(name);
    }

    cout << names.size() << "\n";
    for(string x : names){
      cout << x << "\n"; 
    } 
  }

  return 0;
}