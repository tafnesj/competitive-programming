#include<bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin >> t;
  int pos=0;

  while(t--){
    string number; cin >> number;
    vector<int>odd_elements;
    vector<int>even_elements;

    for(int i=0; i<number.size(); i++){
      pos=number[i]-'0';
      // Even elements
      if(pos%2==0)
        even_elements.push_back(pos);
      // Odd elements
      else
        odd_elements.push_back(pos);
    }

    int i=0, j=0;

    while(i<even_elements.size() || j<odd_elements.size()){
      if(i<even_elements.size() && j<odd_elements.size()){
        if(even_elements[i]<=odd_elements[j]){
          cout << even_elements.at(i++);
        }else{
          cout << odd_elements.at(j++);
        }
      }else if(i<even_elements.size()){
        cout << even_elements.at(i++);
      }else{
        cout << odd_elements.at(j++);
      }
    }
    cout << "\n";
  }
  return 0;
}