#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;
  int sonar=0;

  while(t--){
    int n=0, m=0; 
    cin >> n >> m;
    n-=2, m-=2;
    int aux_n=n/3;
    int aux_m=m/3;
    sonar=aux_n*aux_m;

    if(n%3!=0 && m%3==0){
      sonar+=aux_m;
    }else if(n%3==0 && m%3!=0){
      sonar+=aux_n;
    }else if(n%3!=0 && m%3!=0){
      sonar+=aux_m;
      sonar+=aux_n+1;
    }
    cout << sonar << "\n";
  }
  return 0;
}