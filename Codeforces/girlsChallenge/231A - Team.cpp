#include <bits/stdc++.h> 
using namespace std;
 
int main(){
 
	int total=0, a=0, b=0, c=0, n=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;	
		if((a+b+c)>=2){
		    total = total + 1;
		}
	}
		cout << total << endl;
	return 0;
}
