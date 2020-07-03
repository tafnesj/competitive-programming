#include <bits/stdc++.h> 
using namespace std;

int main(){
    
   int cont = 0;
   string lang = {};
   cin >> lang;

   for(int i=0; i<lang.size(); i++){
       if(lang[i]=='H' or lang[i]=='Q' or lang[i]=='9'){
           cont++;
       }
   }
    
    if(cont>0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

return 0;
}