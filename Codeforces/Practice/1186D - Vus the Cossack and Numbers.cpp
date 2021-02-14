#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int n=0; cin >> n;
  vector<lli>numbers;
  vector<bool>ints(n);
  lli sum_pos=0;
  lli sum_neg=0;

  for(int i=0; i<n; i++){
    double number; cin >> number;
    
    // Separación
    if(number>=0){
      if(floor(number)==ceil(number)){
        numbers.push_back(number);
        sum_pos+=number;
        ints.at(i)=true;
      }else{
        numbers.push_back(number+1);
        sum_pos+=number+1;
      }
    }else{
      if(floor(number)==ceil(number)){
        numbers.push_back(number);
        sum_neg+=number;
        ints.at(i)=true;
      }else{
        numbers.push_back(number-1);
        sum_neg+=number-1;
      }
    }
  }

  sum_pos+=sum_neg;

  for(int i=0; i<n; i++){
    if(sum_pos>0){
      if(numbers.at(i)>0 && !ints.at(i)){
        numbers.at(i)--;
        sum_pos--;
      }
    }else if(sum_pos<0){
      if(numbers.at(i)<0 && !ints.at(i)){
        numbers.at(i)++;
        sum_pos++;
      }
    }
  }
  
  for(auto &x:numbers) cout << x << "\n";

  return 0;
}