#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t=0;
  cin >> t;

  while(t--){
    int n=0, aux=0, aux0=0;
    cin >> n;
    int a[n];
    
    for(int i=0; i<n; i++){
      cin >> a[i];
      if(a[i] % 2 == 0 && i % 2 != 0){
        aux++;
      }else if(a[i] % 2 != 0 && i % 2 == 0){
      aux0++;
      }
    }
		
    if(aux==aux0){
			cout<< aux << endl;
		}else{
			cout<< "-1" << endl;
		}
	}
  return 0;
}