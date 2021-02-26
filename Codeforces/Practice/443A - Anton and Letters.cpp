#include <bits/stdc++.h>
using namespace std;

int main(){
  set<char>letters;
  char letter;

  while(cin>>letter){
    if(letter>='a' && letter<='z')
      letters.insert(letter);
  }

  cout << letters.size() << "\n";

  return 0;
}