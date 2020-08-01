#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int count=0, aux=0;
	string  number;
	cin >> number;
	
	for(int i=0; i<number.length(); i++){
		if(number[i]=='.'){
			count=i;
			aux=i;
			break;
		}
	}
	count-=1;
	
	if(number[count]=='9'){
		cout << "GOTO Vasilisa." << '\n';
	}else if(number[count+2]>='5'){
		number[count]=number[count]+1;
		for(int i=0; i<aux; i++){
			cout << number[i];
		}
		cout << '\n';
	}else{
		for(int i=0; i<aux; i++){
			cout << number[i];
		}
		cout << '\n';
	}
    return 0;
}