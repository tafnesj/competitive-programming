#include <bits/stdc++.h>  
using namespace std;
 
int main(){
	string foot;
  cin >> foot;
	int s=1;
	char p=' ';
	bool danger;
	
	if(foot[0]=='0'){
	  p = '0';
  }	
	else{
    p = '1';
  }
		
	for(int i=1; i<foot.size(); i++){
		if(p == foot[i]){
			s++;
		}else{
			s = 1;
			if(p == '0'){
		    p = '1';
      }else{
			  p = '0';
      }
		}
		if(s == 7){
			cout << "YES";
      return 0;
		}
	}
	
	cout << "NO";
	return 0;
}