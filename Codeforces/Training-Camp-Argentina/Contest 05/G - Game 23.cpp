#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=0,m=0, moves=0, aux=0;
    cin >> n >> m;

    if(m%n==0){
        aux=m/n;
        moves=0;
        while(aux%3==0){
            aux/=3;
            moves++;
        }
        while(aux%2==0){
            aux/=2;
            moves++;
        }
        if(aux!=1){
          moves=-1;
        }
    }else{
      moves=-1;
    }
    
    cout<<moves;
    return 0;
}