#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string a={}, b={};
    cin >> a >> b;
    int r;
 
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
 
        if(a==b){
            r=0;
        }else if(a>b){
            r=1;
        }
        else{
            r=-1;
        }
 
    cout << r << endl;
    
    return 0;
}