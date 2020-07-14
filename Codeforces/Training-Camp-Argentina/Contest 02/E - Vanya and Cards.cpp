#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0, x=0, cards=0, sum=0, res=0;
    cin >> n >> x;
    
    for(int i=0; i<n; i++){
        cin >> cards;
        sum+=cards;
    }
    res = abs(sum)/ x;
        
    if (sum%x != 0){
        res++;  
    } 
    cout<<res<<endl;
    return 0;
    }