#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n=0; cin >> n;
    long long int total_bills=0, aux=0;

    while(n>=1){
        if(n>=100){
            total_bills+=n/100;
            n=n%100;
        }else if(n>=20){
            total_bills+=n/20;
            n=n%20;
        }else if(n>=10){
            total_bills+=n/10;
            n=n%10;
        }else if(n>=5){
            total_bills+=n/5;
            n=n%5;
        }else if(n>=1){
            total_bills+=n/1;
            n=n%1;
        }
    }

    cout << total_bills << "\n";

    return 0;
}