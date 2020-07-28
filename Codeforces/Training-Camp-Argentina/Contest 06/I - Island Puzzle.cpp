#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> a;
    vector<int> b;
    int n=0, aux=0, flag=1, pos=0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin>>aux;
        if(aux){
            a.push_back(aux);
        }
    }
    
    for(int i=0; i<n; i++){
        cin>>aux;
        if(aux){
            b.push_back(aux);
        }
    }

    for(pos=0; pos<b.size(); pos++){
        if(b[pos]==a[0]){
            break;
        }
    }
   
    for(int j=0; j<b.size()-pos; j++){
        if(a[j]!=b[pos+j]){
            flag=0;
        }
    }
    for(int j=0; j<pos; j++){
        if(b[j]!=a[j+b.size()-pos]){
            flag=0;
        }
    }
    
    if(flag==1){
        cout<<"YES"<<endl;
    }else if(flag==0){
        cout<<"NO"<<endl;
    }
    
    return 0;
}