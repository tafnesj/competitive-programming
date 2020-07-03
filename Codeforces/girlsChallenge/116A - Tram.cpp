#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int n=0;
    cin>>n;
    int a[n],b[n],aux=0,min=0;
    
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
 
    for(int i=0;i<n-1;i++){
        aux=b[i]-a[i+1];
        b[i+1]=b[i+1]+aux;
    }
    
    for(int i=0;i<n;i++){
         if(b[i]>min){
            min=b[i];
         }
    }
    
    cout << min;
    return 0;
}