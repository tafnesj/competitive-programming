#include <bits/stdc++.h> 
using namespace std;
 
int main(){
    
    int cont=0;
    string n={};
    cin >> n;
    
    for(int i=0; i<n.size(); i++){
        if(n[i]=='4' or n[i]=='7'){
            cont = cont + 1;
        }
    }
 
    if(cont == 4 or cont == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }
 
 
return 0;
}