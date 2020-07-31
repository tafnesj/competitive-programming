#include <bits/stdc++.h>
using namespace std;

int main(){
  
    int n=0, s=0, d=0, turno=0;
    cin >> n;
    int cards[n];

    for(int i=0; i<n; i++){
        cin >> cards[i];
    }

    for(int i=0, j=n-1; i<=j;){
        if(cards[i]>=cards[j]){  
          if(turno==0){   
              s+=cards[i];
              turno=1;
          }else{
              d+=cards[i];
              turno=0;}
              i++;
        }else{
            if(turno==0){
                s+=cards[j];
                turno=1;
            }else{
                d+=cards[j];
                turno=0;
            }
            j--;
        }
    }
    cout << s << " " << d << '\n';
    return 0;
}