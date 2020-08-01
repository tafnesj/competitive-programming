#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, m=0, c=0, t=0, aux=0 , aux0=1;
    vector<pair<int,int>> list;
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> c >> t;
        list.push_back(make_pair(aux0,c*t+aux));
        aux+=c*t;
        aux0+=c*t;
    }
    aux=0;
    for(int i=0; i<m; i++){
        cin >> c;
        for(int j=aux; j<list.size(); j++){
            if(c>list[j].second){
                aux++;
            }
            if(c>=list[j].first && c<=list[j].second){
                cout << j+1 << '\n';
                break;
            }
        }
    } 
    return 0;  
}