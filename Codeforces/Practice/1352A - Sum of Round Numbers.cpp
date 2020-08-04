#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t=0, cont=0;
  cin >> t;
    
  while(t--){
    string number;
    cin >> number;
    int suma = 0;
      
    for(int i=0; i<number.size(); i++){
      if(number[i]!='0'){
        suma++;
      }
    }
    cout << suma << endl;
      
    for(int j=0; j< number.size(); j++){
      if(number[j]!='0'){
        cout << number[j];
        for(int k=0; k<number.size()-j-1; k++){
          cout << "0";
        }
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}