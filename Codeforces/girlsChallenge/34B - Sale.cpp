#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, m=0, sum=0; 
    int a[100];
    cin >> n >> m;
    
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);

    for (int i=0; i<m; i++){
        if (a[i]<0){
            sum-=a[i];
        }else{
            break;
        }
    }
    
    cout << sum << endl;
    return 0;
}
