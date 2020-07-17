#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=0, aux=0, count=0;
    cin >> n;
    pair<int,int>orders[n];
    
    for(int i=0;i<n;i++){
        cin >> orders[i].second >> orders[i].first;
    }
    
    sort(orders,orders+n);
    aux=orders[0].first;
    
    for(int i=1;i<n;i++){
        if(aux<orders[i].second){
            count++;
            aux=orders[i].first;
        }
    }
    cout << count+1;
    return 0;
}