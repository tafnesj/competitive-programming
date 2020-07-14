#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int a=0, b=0, subs=0;
        cin >> a >> b;
        subs = abs(a-b);
 
        if(a==b){
            cout << 0 << '\n';
        }else if(a<b){
            if(subs%2){
                cout << 1 << '\n';
            }else{
                cout << 2 << '\n';
            }
        }else if(a>b){
            if(subs%2){
                cout << 2 << '\n';
            }else{
                cout << 1 << '\n';
            }
        }
    }
    return 0;
}