#include <bits/stdc++.h>  
using namespace std;
 
int main(){
    int cont = 0;
    string BOG; 
    cin >> BOG;
    for(int i=0; i<BOG.size(); i++){
        for(int j=0; j<i; j++){
            if(BOG[i]==BOG[j]){
                cont++;
                break;
            }
        }
    }
 
    if((BOG.size()-cont)%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
         cout<<"IGNORE HIM!";
    }
    return 0;
}