#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n=0;
    cin>>n;
    int a[100]={0};
    
    for(int i=0; i<n; ++i){
        int temp=0;
        cin>>temp;
        a[temp-1]=i+1;
    }
    int i;
    for(i=0; i<n-1; i++)
        cout<<a[i]<<" ";
        cout<<a[i]<<'\n';
    return 0;
}