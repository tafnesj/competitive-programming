#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string cadena;
    cin >> cadena;
    int cont=0, x=0, y=0;
    x = cadena.length();
    y = (x/2)+1;
 
    for(int i=0; i<x; i++){
        if(cadena[i]== 'a'){
            cont+=1;
        }
    }

    if(cont >= y){
        cout << x;
    }else{
        cout << (2*cont)-1;
    }

    return 0;
}