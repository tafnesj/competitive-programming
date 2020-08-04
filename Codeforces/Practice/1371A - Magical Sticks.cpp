#include<bits/stdc++.h>
using namespace std;

int main(){
	int t=0, n=0;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    if(n<3){
	        cout<<1<<endl;  
	    }else{
	        cout<<(n+1)/2<<endl;
	    }
	}
	return 0;
}