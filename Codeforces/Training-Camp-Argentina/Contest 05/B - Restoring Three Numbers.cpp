#include<bits/stdc++.h>
using namespace std;

int main(){
    
	int x[4];
	
	for(int i=0; i<4; i++){
	    cin >> x[i];    
	}
	
	sort(x,x+4);
	
	for(int i=0; i<3; i++){
	    cout << x[3]-x[i] <<" ";
	}
        
return 0;
}