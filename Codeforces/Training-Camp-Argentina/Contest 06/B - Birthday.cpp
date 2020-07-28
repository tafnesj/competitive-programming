#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=0;
    cin >> n;
    long long aux[n];
    vector <int> a0;
    vector <int> ax;

    for(int i=0; i<n; i++){
        cin >> aux[i];
    }
    sort(aux, aux+n);
    
    int count=0;
    while(count<n){
      a0.push_back(aux[count]);
      count++;
      
      if(count<n){
        ax.push_back(aux[count]);
        count++;    
      }
    }

    for(int i=0; i<a0.size(); i++){
        cout << a0[i]<<" ";
    }
    
    for(int i=ax.size()-1; i>=0; i--){
        cout << ax[i]<<" ";
    }
    
    cout << endl;
    return 0;
}