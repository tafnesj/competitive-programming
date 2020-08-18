#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	cin >> n;
	cout << "I hate ";
	
  for(int i=1; i<n; i++){
		cout << "that I love ";
    i++;
		if(i<n){
      cout << "that I hate ";
    }
	}

	cout << "it";
	return 0;
}
