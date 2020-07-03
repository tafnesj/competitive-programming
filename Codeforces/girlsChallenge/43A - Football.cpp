#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n=0, cont=0; 
	cin >> n;
	map<string,int>foot;
	string gol; 
	
	for(int i=0; i<n; i++){
		string team; 
		cin >> team;
		foot[team]++;
    	
		if(cont<foot[team]){
			cont=foot[team];
			gol=team;
		}
	}
	cout << gol << endl;
	return 0;
}