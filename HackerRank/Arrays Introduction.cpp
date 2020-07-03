#include <bits/stdc++.h>
using namespace std;

int main() {
    int tam=0;
    cin >> tam;
    int arreglo[tam] = {};

    for(int i=0; i<tam; i++){
        cin >> arreglo[i];
    }

    for(int i=(tam-1); i>=0; i--){
        cout << arreglo[i] << " ";
    }

    return 0;
}