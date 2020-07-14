#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t=0;
    cin >> t;
    
    while(t--){
        int a=0, c=0, aux=0, aux0=0, sum=0;
        cin >> a;
        for(int j=0; j<a; j++){
            cin >> c;
            sum+=c;
            
            if(c%2==0){
                aux++;
            }else{
                aux0++;
            }
        }
        
        if(sum%2!=0){
            cout << "YES" << '\n';
        }else if(aux==a || (aux0==a && a%2==0)){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
        }
        aux0=0;
        aux=0;
    }
    return 0;
}