#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int faces=0 , n;
    cin >> n;
    string poly;
 
    while(n--){
        cin >> poly;
        if(poly == "Tetrahedron"){
            faces += 4;
        }else if(poly == "Cube"){
            faces += 6;
        }else if(poly == "Octahedron"){
            faces += 8;
        }else if(poly == "Dodecahedron"){
            faces += 12;
        }else if(poly== "Icosahedron"){
            faces += 20;
        }
    }
    cout << faces;
    return 0;
}