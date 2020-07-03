#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int cerr[4];
    int cont=0;
    
    for(int i=0; i<4; i++){
        cin>>cerr[i];
    }
 
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(cerr[i] == cerr[j] && i != j){
                cerr[i]=0;
                cont++;
            }
        }
    }
    cout << cont << endl;
    return 0;
}
 