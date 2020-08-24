#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, count=0;
  cin >> n;
  string prefixes;
	cin >> prefixes;

	for(int i=0; i<n; i+=2){
		if(prefixes[i]==prefixes[i+1]){
			count++;
			prefixes[i]='b';
      prefixes[i+1]='a';
		}
	}
	
  cout << count << endl;
  cout << prefixes;
  return 0;
}