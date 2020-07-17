#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n=0, m=0, count=0;
    cin >> n >> m;
    
    while(m>n){
        if(m%2==0){
            m/=2;
        }else{
            m++;  
        } 
        count++;
    }
    cout << count+(n-m);
    return 0;
}