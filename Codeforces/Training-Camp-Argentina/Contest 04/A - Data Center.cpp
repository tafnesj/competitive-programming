#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, count=1000000, mn=0, aux=0;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            mn=n/i;
            aux=(mn+i)*2;
            aux=min(count,aux);
            count = aux;
        }
    }
    cout << count;
    return 0;
}
 