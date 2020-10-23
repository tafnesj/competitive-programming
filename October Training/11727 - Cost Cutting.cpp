#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;
  int count=0;

  while(t--){
    int num;
    vector<int>aux ={};
    for(int i=0; i<3; i++){
      cin >> num;
      aux.push_back(num);
    }
    sort(aux.begin(), aux.end());
    count++;
    cout << "Case" << " " << count << ":" << " " << aux[1] << "\n";
  }
  
  return 0;
}