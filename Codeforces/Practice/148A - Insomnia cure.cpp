#include <bits/stdc++.h> 
using namespace std;
 
int main(){
	
        int k, l, m, n, d, suf;
	bool escapar=true;
	cin >> k >> l >> m >> n >> d;
	suf = d;
 
	for(int i=1; i<=d; escapar = true, ++i){
 		if(i%k==0){
                   escapar = false;
                } 
		if(i%l==0){
                   escapar = false;
                } 
		if(i%m==0){
                   escapar = false;
                } 
		if(i%n==0){
                   escapar = false;
                } 
		if(escapar){
                   suf--;
                } 
	}
	cout << suf << endl;
        return 0;
}