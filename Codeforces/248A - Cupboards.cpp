#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n=0, l=0, r=0, t=0, aux=0, aux0=0;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> aux;
		cin >> aux0;
		l += aux;
		r += aux0;
	}
 
	if(l < n-l){
	    t += l;
	}else{
	    t+=(n-l);
	}
	
	if(r < n-r){
	    t+=r;
	}else{
	    t += (n-r);
	}

	cout << t << endl;
	return 0;
}