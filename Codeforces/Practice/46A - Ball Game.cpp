#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[100];
	int i=0, n=0;
	cin >> n; 
	
	for(i=0;i<n;i++){
		a[i]=i+1;
	}

	int m=1;
	for(i=1;i<n;i++){
		m+=i;
		if(m>n) m=m-n;
		cout << m;
	}

	return 0;
}