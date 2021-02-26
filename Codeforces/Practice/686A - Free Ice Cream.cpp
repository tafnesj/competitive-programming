#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int n=0; cin >> n;
  lli x=0; cin >> x;
  lli ice_cream_total=x;
  lli distress=0;

  while(n--){
    char sign; 
    lli ice_cream=0;
    cin >> sign >> ice_cream;

    if(sign=='+'){
      ice_cream_total+=ice_cream;
    }else if(sign=='-'){
      if(ice_cream_total<ice_cream){
        distress++;
      }else{
        ice_cream_total-=ice_cream;
      }
    }
  }
  
  cout << ice_cream_total << " " << distress << "\n";
  return 0;
}