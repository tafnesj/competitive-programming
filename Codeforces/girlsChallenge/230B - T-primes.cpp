#include <bits/stdc++.h>
using namespace std;

int primos(int aux){

  if(aux<2){
    return 0;    
  }
 
	for(int i=2; i<=sqrt(aux); i++){
		if(aux%i==0){
		  return 0;    
		}
	}
	return 1;

}

int main(){
	int n;
	cin >> n;
  
	while(n--){
		long long aux, x;
		cin >> x;
		aux=sqrt(x);
    
		if(pow(aux,2)==x && primos(aux)){
		    cout << "YES" << endl;
		}else{
		    cout << "NO" << endl;    
		}
	}
}
