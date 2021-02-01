#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n; cin >> n;
  set<string> names;
  
  while(n--){
    string name; cin >> name; 
    if(names.count(name)){
      cout<<"YES\n";
    }else{
      names.insert(name);
      cout<<"NO\n";
    }
  }
 
  return 0;
}