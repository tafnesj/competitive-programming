#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;
  
  while(t--){
    int n=0, k=0; cin >> n >> k;
    int x=0, y=0; cin >> x >> y;
    int cities[n];
    memset(cities,0,sizeof(cities));

    // Indexing
    x-=1;
    y-=1;

    // Jumps
    int pos=x;

    while(cities[pos]!=-1){
      cities[pos]=-1;
      pos+=k;
      pos%=n;
    }
    
    if(cities[y]==-1){
        cout << "YES" << "\n";
    }else{
      cout << "NO" << "\n";  
    }    
  }

  return 0;
}