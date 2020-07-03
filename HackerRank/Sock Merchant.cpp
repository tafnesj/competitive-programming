#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=0, cont=0;
    cin >> n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    sort(ar, ar+n);

    for(int i=0; i<n-1; i++){
        if(ar[i]==ar[i+1]){
            cont++;
            i++;
        }
    }

    cout << cont << endl;
    return 0;
}