#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0, a=0, b=0, one=0, two=0, aux=0, den=0;
	cin >> n >> a >> b;
	one=a;
	two=b; 
 
	for(int i=0; i<n; i++){
		int t=0;
		cin >> t;
		if(t==1){
			if(one>0){
				one--;
			}else if(two>0){
				two--;
				aux++;
			}else if(aux>0){
				aux--;
			}else{
				den+=1;
			}
		}else{
			if(two>0){
				two--;
			}else{
				den+=2;
			}
		}
	}
	cout << den;
	return 0;
}