#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long int t=0, a=0, b=0;
	cin >> t;
	
	while(t--){
		cin >> a >> b;
		a=sqrt(a-1);
		b=sqrt(b);
		cout << b-a << '\n';
	}
	
	return 0;
}