#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t=0, n=0, change=0;
    string stone;
    cin >> t >> stone;
    n = stone.length();
    
    for(int i=0; i<n-1; i++){
        if(stone[i]==stone[i+1])
           change++;
    }
    
    cout << change << endl;
}