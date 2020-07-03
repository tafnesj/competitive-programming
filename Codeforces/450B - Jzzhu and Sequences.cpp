#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x=0, y=0, n=0, aux=0;
    cin >> x >>y >> n;
	
    vector<int>num;
    num.push_back(x);
    num.push_back(y);
	
    for(int i=1; i<6; i++){
        int aux = num[i]-num[i-1];
          num.push_back(aux);
    }
	
	  int fn= num[(n-1)%6];
    cout << (((fn%1000000007)+1000000007)%1000000007);
	
    return 0;
}