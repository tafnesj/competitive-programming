#include<bits/stdc++.h>
using namespace std;

int main(){

  int count=0, sum=0, mod=1000000007;
  string steps;
  cin >> steps;

  for(int i=steps.size()-1; i>=0; i--){
      if(steps[i]=='b'){
        count++;
      }else{
          sum+=count;
          sum%=mod;
          count*=2;
          count%=mod;
      }
  }
    cout << sum << '\n';
    return 0;
}