#include<bits/stdc++.h>
using namespace std;
 
int main(){
	
	int a=0, b=0, m=0, n=0, aux=0;
	int square[55][55], trees=1e5;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> square[i][j];
			square[i][j]+=square[i-1][j];
		}
	}
	
	cin >> a >> b;
	
	for(int i=a; i<=n; i++){
		for(int j=1; j<=m+1-b; j++){
			aux = 0;
			for(int x=0; x<b; x++){
				aux+=square[i][j+x]-square[i-a][j+x];
			}
			trees=min(trees, aux); 
		}
	}
	
	for(int i=b; i<=n; i++){
		for(int j=1; j<=m+1-a; j++){
			aux=0;
			for(int x=0; x<a; x++){
				aux+=square[i][j+x]-square[i-b][j+x];
			}
			trees=min(trees, aux); 
		}
	}
	
	cout << trees << '\n';
    return 0;
}