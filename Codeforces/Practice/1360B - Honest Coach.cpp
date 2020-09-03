#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0;
  cin >> t;

  while(t--){
    int n=0, aux=0, dif=0;
    cin >> n;
    vector<int>athletes;

    for(int i=0; i<n; i++){
      int s=0;
      cin >> s;
      athletes.push_back(s);
    }

    sort(athletes.begin(), athletes.end());
    aux=dif=abs(athletes[0]-athletes[1]);

    for(int i=1; i<n-1; i++){
      dif=abs(athletes[i]-athletes[i+1]);
      if(aux>dif){
        aux=dif;
      }
    }
    
    cout << aux << '\n';
  }

  return 0;
}