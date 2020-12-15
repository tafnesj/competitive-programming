#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int aux=0;
  vector<int>nums;
  set<int>num;
  
  while(cin>>aux){
    nums.push_back(aux);
    num.insert(aux);
  }

  for(int i=0; i<nums.size(); i++){
    for(int j=i; j<nums.size(); j++){
      int resta=2020-(nums.at(i)+nums.at(j));
      if(num.count(resta)){
        cout << nums.at(i)*nums.at(j)*resta << "\n";
      }
    }
  }
  
  return 0;
}