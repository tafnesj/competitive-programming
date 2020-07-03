#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int flag = 1;
  map<char,int> mensaje;
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
 
  for(int i=0; i<s1.size(); i++){
      mensaje[s1[i]]++;
    }
 
  for(int i=0; i<s2.size(); i++){
    if(mensaje[s2[i]]>0 || s2[i]==' '){
      mensaje[s2[i]]--;
      continue;
    }else{
      flag = 0;
      break;
    }
  }
 
  if(flag==1){
    cout<<"YES";
  }else{
    cout<<"NO";   
  }
  
  return 0;
}

