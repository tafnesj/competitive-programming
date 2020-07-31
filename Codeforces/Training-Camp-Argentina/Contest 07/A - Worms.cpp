#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n=0, m=0, pos=0, aux=0, binPos=0, search[100005];
    cin >> n;
    vector<int> worms;
    
    for(int i=0; i<n; i++){
        cin >> aux;
        pos+=aux;
        worms.push_back(pos);
    }

    int low=0, top=n, mid=(top+low)/2;
    cin >> m;

    for(int i=0; i<m; i++){
        cin >> aux;
        while(top>=low){
            mid=(top+low)/2;
            if(aux<=worms[mid]){
                binPos=mid;
                top=binPos-1;
            }else{
                low=mid+1;
            }
        }
        search[i]=binPos+1;
        mid=0; 
        low=0;
        top=n-1;
    }

    for(int i=0;i<m;i++){
        cout << search[i] << '\n';
    }

    return 0;
}