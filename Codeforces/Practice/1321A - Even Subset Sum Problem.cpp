#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;
  
  while(t--){
    int n=0; cin >> n;
    // Counter of two odd elements
    int odd_numbers=0;
    vector<int>number_elements;
    // Positions of 2 odds elements
    vector<int>odds_positions;
    
    for(int i=0; i<n; i++){
      int element; cin >> element;
      number_elements.push_back(element);
    }

    if(n==1){
      // Case: One element
      if(number_elements.at(0)%2!=0)
        cout << -1 << "\n";
      else
        cout << 1 << "\n" << 1 << "\n";
    }else{
      // Case: two o more elements
      for(int i=0; i<number_elements.size(); i++){
      // Even element
        if(number_elements.at(i)%2==0){
          cout <<  1 << "\n" <<  i+1 << "\n";
          break;
        }else if(number_elements.at(i)%2!=0){
          odd_numbers++;
          odds_positions.push_back(i+1);
          if(odd_numbers>=2){
            cout << 2 << "\n";
            cout << odds_positions.at(0) << " ";
            cout << odds_positions.at(1) << "\n";
            break;
          }
        }
      }
    }
  }
  
  return 0;
}