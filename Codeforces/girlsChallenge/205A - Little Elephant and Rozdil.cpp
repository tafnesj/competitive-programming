#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n=0, c=0, cont=0;
    cin >> n;
    vector<int>city;
    
    for(int i=0; i<n; i++){
        cin >> c;
        city.push_back(c);
    }
    
    int minI = min_element(city.begin(),city.end()) - city.begin();
    int min = *min_element(city.begin(), city.end());
    
    for(int i=0; i<n; i++){
        if(min == city[i]){
            cont++;
        }
    }
    
    if(cont>1){
        cout << "Still Rozdil";
    }else{
        cout << minI+1;
    }
    
    return 0;
}