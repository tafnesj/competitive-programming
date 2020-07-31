#include <bits/stdc++.h>
using namespace std;

int main(){

    int r=0, c=0, cakes=0;
    cin >> r >> c;
    string s;
    int fil[11]={0};
    int col[11]={0};
    
    for(int i=0; i<r; i++){
        cin >> s;
        for(int j=0; j<c; j++){
            if(s[j]=='S'){
                fil[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(fil[i]==0 || col[j]==0){
                cakes++;
            }
        }
    }

    cout << cakes;
    return 0;
}