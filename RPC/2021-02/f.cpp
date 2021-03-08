#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=0; cin >> n;
  vector<int>opNums(n);
  vector<int>teachers(n);
  
  for(int i=0; i<n; i++){
    cin >> opNums.at(i);
    teachers.at(i)=i+1;
  }
  
  int aux=0;

  while(n>1){
    int eliminated=aux+opNums.at(aux)-1;
    eliminated%=n;
    
    for(int i=(eliminated+1); i<n; i++){
      opNums.at(i-1)=opNums.at(i);
      teachers.at(i-1)=teachers.at(i);
    }
    
    n--;
    aux=eliminated%n;
  }
  
  cout << teachers.at(0) << "\n";
  return 0;
}
