#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=0, k=0, aux=0;
	cin >> n;
	
  k=n/2;
	aux=(k-1)*2;
	cout << aux/2+1 << '\n';
	
	for(int i=0; i<aux/2; i++){
		cout << 2 << " ";
	}
	cout << n-aux;
	return 0;
}