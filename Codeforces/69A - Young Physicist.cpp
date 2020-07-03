#include <bits/stdc++.h>
using namespace std;

int main(){

	int x=0, y=0, z=0, n=0, a=0, b=0, c=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;	
		x  = x + a;
		y  = y + b;
		z  = z + c;
	}
	
	if(x==0 and y==0 and z==0){
		cout << "YES" << endl;
	}else
		cout << "NO" << endl;
		
	return 0;
}



 