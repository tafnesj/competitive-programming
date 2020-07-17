#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[3];
    
    for(int i=0; i<3; i++){
        cin >> x[i];
    }
    
    sort(x,x+3);
    int dist = x[2]-x[1]+x[1]-x[0];
    
    cout << dist;
    return 0;
}