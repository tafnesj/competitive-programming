#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t=0;
    cin >> t;
    
    while(t--){
        
        int n=0, x=0;
        string s, aux;
        cin >> n >> s;
        
        while(x<n){
            if(s[x]>s[n-1]){
                s[x]--;
                s[n-1]++;
            }else if(s[x]<s[n-1]){
                s[x]++;
                s[n-1]--;
            }
            x++;
            n--;
        }
        
        aux=s;
        reverse(s.begin(),s.end());
 
        if(aux==s){
            cout << "YES" << '\n';
        }else
            cout << "NO" << '\n';
    }
return 0;
}