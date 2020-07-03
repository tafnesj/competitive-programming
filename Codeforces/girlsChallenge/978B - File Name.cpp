#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
	int n=0, cont=0;
	cin >> n;
	string mess={};	
	cin>>mess;
 
	for(int i=0; i<n; i++){
        if(i+2<=n-1){
            if(mess[i]=='x' && mess[i+1]=='x' && mess[i+2]=='x'){
                cont++;
            }
        }
    }
    cout<<cont;
    return 0;
}