#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=0, m=0, cols=0;
    cin >> n >> m;
    string table[n];

    for(int i=0; i<n; i++){
        cin>>table[i];
    }
        
    for(int i=0; i<m; i++){
        for(int j=0; j<n-1; j++){
            if(table[j].substr(0,i+1)>table[j+1].substr(0,i+1)){
                cols++;
                for(int x=0; x<n; x++){
                    table[x][i]='.';
                }
                break;
            }
        }
    }
    
    cout << cols;
    return 0;
}

 