#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0, cont=0, sum=0, aux=0, aux0=0;
	cin>>n;
	vector<int>t;
	
	for(int i=0; i<n; i++){
		cin >> cont;
		sum+=cont;
		t.push_back(cont);
	}
	
	int x=0;
    
    while(aux<=sum/2){
     	aux+=t[x];
     	x++;
	 }
	 
	 aux0=aux-t[x-1];
	 
	 if(aux0<=(sum-aux)){
	   	 cout<<x<<" "<<n-x;
	 }else{
	 cout<<x-1<<" "<<n-x+1;
	 }
	 return 0;
}