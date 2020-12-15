#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int aux=0;
  vector<int>nums;
  
  while(cin>>aux){
    nums.push_back(aux);
  }

  for(int i=0; i<nums.size(); i++){
    for(int j=i; j<nums.size(); j++){
      if(2020==(nums.at(i)+nums.at(j))){
        cout << nums.at(i)*nums.at(j) << "\n";
      }
    }
  }
  
  return 0;
}