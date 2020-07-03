#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t=0;
    cin >> t;
    
    while(t--){
        int n=0, aux=1;
        cin >> n;
        int a[n];
        
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
 
        if(n==1){
            cout << "YES" << endl;
        }else{
            sort(a,a+n);
            vector<int> num;
 
            for(int i=0; i<n-1; i++){
                 num.push_back(a[i+1]-a[i]);
            }
            for(int i=0;i<num.size();i++){
                if(num[i]%2== 1){
                    aux=0;
                    break;
                }
            }
            
            if(aux==1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
  return 0;
}