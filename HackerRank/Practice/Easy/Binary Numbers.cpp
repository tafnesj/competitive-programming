#include <bits/stdc++.h>
using namespace std;

int main(){
  int number=0; cin >> number;
  int counter_ones=0;
  int max_counter=0;
  bitset<20>binary_number(number);

  for(int i=0; i<20 ; i++){
    if(binary_number[i]==1){
      counter_ones++;
      max_counter=max(counter_ones,max_counter);
    }else{
      counter_ones=0;
    }
  }

  cout << max_counter << "\n";

  return 0;
}
