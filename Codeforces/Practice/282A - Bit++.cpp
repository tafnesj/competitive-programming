#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, cont=0;
    char a1=0, a2=0, a3=0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>a1>>a2>>a3;
        if(a2=='+'){
            cont++;
        }else{
            cont--;
        }
    }
    cout<<cont;
    return 0;
}