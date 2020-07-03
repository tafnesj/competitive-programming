#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t=0, n=0, m=0;
    cin >> t;
 
    while(t--){
        cin >> n >> m;
        if(n==1){
            cout << "0" << endl;
        }else if(n>2){
            cout << 2*m << endl;
        }
        else{
            cout << m << endl;
        }
    }
}


    