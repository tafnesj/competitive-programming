#include <bits/stdc++.h>
using namespace std;

int main(){
	int t=0;
	cin >> t;
	while(t--){
    int n=0, angry=0, aux=0;
    bool flag=false;
    string students;
    cin >> n;
    cin >> students;
    
    for(int i=0; i<n; i++){
      if(students[i]=='A'){
	      flag=true;
		    aux=0;
		  }else if(flag){
		    aux++;
        angry=max(angry,aux);
      }
	  }
    cout << angry << endl;
  }
  return 0;
}