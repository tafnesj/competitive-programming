#include <bits/stdc++.h> 
using namespace std;

int main(){
    
    int t=0, aux=0;;
    string sum = {};
    cin >> sum;

    aux = sum.size()/2;

    if(sum.size()==1){
            cout << sum;
    }
    else{
        while(t<sum.size()-aux){
            t++;
            for(int i=0; i<sum.size()-2; i+=2){
                if(sum[i]>=sum[i+2]){
                    swap(sum[i], sum[i+2]);
                }
            }    
        }
            cout << sum;
    }   
    return 0;
}