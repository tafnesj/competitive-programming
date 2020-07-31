#include <bits/stdc++.h>
using namespace std;

int main(){

   int n=0, aux=0, count=0;
   string s;
   cin >> n >> s;

   sort(s.begin(),s.end());

   for(int i=1; i<n; i++){
	    if(s[i]==s[i-1]){
          aux++;
      }else{
          count++;
      } 
    }
        
   if(aux+count>25){
      cout << -1;
   }else{
      cout << aux;
   } 

  return 0;
}