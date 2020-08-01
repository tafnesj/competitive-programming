#include <bits/stdc++.h>
using namespace std;

int main(){
  int t, n;
  string s;
	cin >> t;
	while(t--){
    cin>>n>>s;
    int respuesta = n-1;
    for(int i=0; i<n; ++i){
      if(s[i]=='>' || s[n-1-i]=='<'){
        respuesta = min(respuesta,i);
      }
    }
    cout<<respuesta<<endl;
  }
  return 0;
}