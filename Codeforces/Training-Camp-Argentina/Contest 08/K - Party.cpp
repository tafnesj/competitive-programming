#include <bits/stdc++.h>
using namespace std;

int main(){

	int t=0, n=0;
	cin >> t;

	while(t--){
		cin >> n;
		if(n-2<1){
            cout << 0 << '\n';
        }else{
            cout << n-2 << '\n';
        } 
	}
	return 0;
}
 