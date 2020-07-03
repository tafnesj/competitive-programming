#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    for(n++;n<=10000;n++){
        int n1=n/1000,n2=n%1000/100,n3=n%100/10,n4=n%10;
        if(n1!=n2&&n1!=n3&&n1!=n4&&n2!=n3&&n2!=n4&&n3!=n4){
            cout<<n;
            return 0;
        }
    }
    return 0;
}