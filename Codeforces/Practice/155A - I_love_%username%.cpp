#include <bits/stdc++.h> 
using namespace std;

int main(){
 
    int n=0, cont=0, cont1=0;
    cin >> n;
    int user[n]={};

    for(int i=0;i<n;i++){
        cin >> user[i];
    }
    
    int max=user[0];
    int min=user[0];

    for(int i=0;i<n;i++){
        if(user[i]>max)
        {
            max=user[i];
            cont++;
        }
        else if(user[i]<min)
        {
            min=user[i];
            cont1++;
        }
    }
    cout<< (cont1+cont) <<endl;
    return 0;
}