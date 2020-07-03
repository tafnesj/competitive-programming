#include <bits/stdc++.h>
using namespace std;
 
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n=0, m=0;
    cin >> n >> m;
    
    if(n==m){
        for(int i=0; i<n; i++){
            cout << "B" << "G";
        }
    }else if(n>m){
        for(int i=0; i<m; i++){
            cout << "B" << "G";
        }
        for(int i=0; i<n-m; i++){
            cout << "B";
        }
    }else if(m>n){
        for(int i=0; i<n; i++){
            cout << "G" << "B";
        }
        for(int i=0; i<m-n; i++){
            cout << "G";
        }
    }
 
    return 0;
}
 