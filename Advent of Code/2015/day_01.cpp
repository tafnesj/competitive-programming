#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  lli present_floor = 0;
  int position = 1;
  string floors; cin >> floors;

  // Part 01
  for(int i=0; i<floors.size(); i++){
    if(floors[i]=='(') present_floor++;
    if(floors[i]==')') present_floor--;
  }

  cout << "| Part 01 |" << " Floor: " << present_floor << "\n";

  // Part 02
  present_floor = 0;
  
  for(int i=0; i<floors.size(); i++){
    if(floors[i]=='(') present_floor++;
    if(floors[i]==')') present_floor--;
    
    if(present_floor == -1){
      position+=i;
      break;
    }
  }
  
  cout << "| Part 02 |" << " Position: " << position << "\n";

  return 0;
}