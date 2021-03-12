#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t=0; cin >> t;
 
  while(t--){
    int a=0, b=0; 
    cin >> a >> b;
    cout << ((a%b)?(b-(a%b)):0) << "\n";
  }
	return 0;
}