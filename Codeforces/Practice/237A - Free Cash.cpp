#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n=0, cont=1, hrs=0, minu=0, aux=0;
	cin >> n;
	
	vector<pair<int,int>> hora;
	
	for(int i=0; i<n; i++){
	    cin >> hrs >> minu;
	    hora.push_back({hrs,minu});
	}
	
	sort(hora.begin(),hora.end());
	
	for(int i=0; i<n-1; i++){
	    if(hora[i].first == hora[i+1].first && hora[i].second == hora[i+1].second){
	        cont+=1;
	    }else{
        aux = max(aux,cont);
        cont = 1;
      }     
	}
    
    aux = max(aux,cont);
    cout << aux;
	
	return 0;
}