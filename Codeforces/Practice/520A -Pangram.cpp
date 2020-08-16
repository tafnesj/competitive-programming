#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, count=0;
  cin >> n;
  string str, aux;
  cin >> str;
  
  for(int i=0; i<n; i++){
      str[i]= toupper(str[i]);
  }
  sort(str.begin(), str.end()); 
  //cout << "Str:"<< str << endl;

  for(int i=0; i<n-1; i++){
    if(str[i]!=str[i+1]){
        count++;
    }
  }

  if(count>=25){
    cout << "YES";
  }else{
    cout << "NO";
  }

  return 0;
}