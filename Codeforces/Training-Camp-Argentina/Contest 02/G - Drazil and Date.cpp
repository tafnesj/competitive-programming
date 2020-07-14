#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a=0, b=0, s=0;
    cin >> a >> b >> s;
    a=abs(a);
    b=abs(b);
    
    if(a+b <= s){
        if(s%2 == (a+b)%2){
            cout << "Yes";
        }else{
            cout << "No";
        }
    }else{
        cout << "No";
    }
    return 0;
}