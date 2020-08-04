#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n=0;
    cin >> n;
 
    int x, sum=0, p=0;
 
    for(int i=0; i<n; i++){
        cin >> x;
 
        if((p == x && x != 3) || x == 0) sum++, p=0;
        else{
            if(x<3) 
                p=x;
            else if(p!=0) 
            p=3-p;
        }
    }
 
    cout << sum << endl;
 
    return 0;
}