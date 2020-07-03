#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n=0;
    long long k=0;
    cin >> n >> k;
    long long a = n/2;
    
    if(n%2==0){
        a++;
    }
    else{
        a+=2;
    }
    
    if(k<a){
        long long ans=0;
        ans = k*2-1;
        cout << ans;
    }
    else{
        long long res=0;
        res=(k-(n+1)/2)*2;
        cout << res;
    }
    
    return 0;
}