#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n=0, x=0;
	int week[6];
	cin >> n;
	
	for(int i=0; i<7; ++i){
		cin >> week[i];
	}
	
	while(n>0){
		if(x == 7){
            x = 0;
		}
		n -= week[x];
		++x;
	}
	
	cout << x;
	return 0;
}