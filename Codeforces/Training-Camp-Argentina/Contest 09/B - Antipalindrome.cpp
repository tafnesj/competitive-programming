#include<bits/stdc++.h>
using namespace std;

bool palindromo(string s){
	string x=s;
	reverse(s.begin(),s.end());
	return x==s;
}

int main(){
	string s; cin>>s;
	int tam=s.length();
	int resultado=0;
	for(int i=0;i<=tam;++i){
		for(int j=0;j<=tam;++j){
			string subcadena=s.substr(i,j);
			if(!palindromo(subcadena)){
				int longitud=subcadena.length();
				resultado=max(resultado,longitud);
			}
		}
	}
	cout<<resultado;
	return 0;
}