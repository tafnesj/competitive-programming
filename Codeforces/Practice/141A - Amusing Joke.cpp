#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    string a, b, c, conc;
    cin >> a >> b >> c;
    int tam = a.size()+b.size();
    int aux = c.size();
    int cont=0;
    conc = a+b;

    if(tam == aux){
        sort(conc.begin(), conc.end()); 
        sort(c.begin(), c.end()); 
        
        for(int i=0; i<tam; i++){
            if(c[i]==conc[i]){
                cont++;
            }else{
                break;
            }
        }
    }
    
    if(cont == tam){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}
 