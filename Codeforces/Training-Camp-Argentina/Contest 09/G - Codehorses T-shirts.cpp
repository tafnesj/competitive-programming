#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t=0, count=0;
    cin >> t;
    string a[105], b[105];

    for(int i=0; i<t; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<t; i++){
        cin >> b[i];  
    } 
    
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            if(b[i] == a[j]){ 
                count++; 
                a[j]="0"; 
                break;
            }
        }
    }
    
    cout << t-count << '\n';
    return 0;
}