#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin >> t;
    
    while(t--){
        int n=0, flag=0;
        cin >> n;
        int a[n];
        
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        sort(a,a+n);
        
        for(int i=0; i<n-1; i++){
			if(a[i+1]-a[i]>1){
				flag=1;
				break;
			}
        }
    	
    	if(flag==1){
    	    cout<<"NO" << "\n";
    	}else{
    		cout<<"YES" << "\n";
    	}
    }
    return 0;  
}