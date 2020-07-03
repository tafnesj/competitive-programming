#include <bits/stdc++.h> 
using namespace std;
 
int main(){
    int cont=0;
    string a = {};
    cin >> a;
    string b = {};
    cin >> b;
    std::reverse(std::begin(a), std::end(a)); 
 
    for(int i=0; i<a.size(); i++){
        if(a[i]==b[i]){
            cont++;
        }
    }
    
    if(cont==a.size()){
        cout << "YES";
    }else{
      cout << "NO";
    }
   
    return 0;
}