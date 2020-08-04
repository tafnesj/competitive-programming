#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int cont=0;
    string a = {};
    cin >> a;
    string b = {};
    cin >> b;
    
    for(int i=0; i<a.size(); i++){
        if(a[i]=='1' and b[i]=='1' or a[i]=='0' and b[i]=='0'){
            cout << "0";
        }else if(a[i]=='1' and b[i]=='0' or a[i]=='0' and b[i]=='1'){
            cout << "1";
        }
    }
    return 0;
}