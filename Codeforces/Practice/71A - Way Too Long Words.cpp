#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t=0;
    cin >> t;
    string s;
    
    while(t--){
        cin >> s;
        int tam = s.size();
        
        if(tam>10){
            cout << s[0] << tam-2 << s[tam-1] << endl;
        }else{
            cout << s << endl;
        }
    }
    return 0;
}
 