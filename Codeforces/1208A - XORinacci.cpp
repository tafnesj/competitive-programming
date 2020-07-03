#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t=0;
    cin >> t;

    while(t--){
        int a=0, b=0, n=0;
        cin >> a >> b >> n;
        int f = n%3;

        if(f==0){
            cout << a << endl;
        }else if (f==1) {
            cout << b << endl;
        }else{
            cout << (a xor b) << endl;
        }
    }
    return 0;
}