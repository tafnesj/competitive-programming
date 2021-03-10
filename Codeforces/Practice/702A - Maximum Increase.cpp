#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=0,a=0;
	cin >> n >> a;
	int maxi=1, aux=0, aux_1=1;

	while(--n){
		cin >> aux;
		if(aux>a) aux_1++;
		else aux_1=1;
			a=aux;
			maxi=max(maxi,aux_1);
	}
	cout << maxi << "\n";
	return 0;
}
