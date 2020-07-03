#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n=0;
    cin >> n;
    float p=0, t=0, prom=0;
    
    for (int i=0; i<n; i++){
        cin >> p;
        t = t+p;
    }

    prom = t/n;
    cout << fixed;
    cout << setprecision(5) << prom;
 
    return 0;
}