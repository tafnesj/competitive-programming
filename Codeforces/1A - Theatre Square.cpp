#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n=0,m=0,a=0,aux=0,aux0=0;
	cin >> n >> m >> a;
	
	aux=n/a;
	aux0=m/a;
	
	if (a*aux<n){
	  aux++;  
	} 
	if (a*aux0<m){
	  aux0++;  
	} 
	
	cout<<aux*aux0;
}
 	