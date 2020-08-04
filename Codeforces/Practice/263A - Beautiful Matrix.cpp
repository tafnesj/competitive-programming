#include <bits/stdc++.h>
using namespace std;

int main(){

    int matriz[5][5]={};
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> matriz[i][j];
            if(matriz[i][j]==1){
				if(i==3 and j==1 or i==1 and j==3){
            		cout << "2";
				}else if(i==1 and j==4 or i==4 and j==1){
					cout << "3";
				}else if(i==0 and j==4 or i==0 and j==3 or i==3 and j==0 or i==4 and j==0){
					cout << i+j;	
				}else{
					cout << abs(((i+j)-4));
				}
			}        
		}
    }
    return 0;
}