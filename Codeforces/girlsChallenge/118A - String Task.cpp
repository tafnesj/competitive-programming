#include <bits/stdc++.h>
using namespace std;


int main(){
  string a = {};
  string b = {};
  cin >> a;

    for(int i=0; i<a.length(); i++){
    	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U'||a[i]=='Y')
        {}
    	else
    	{
    		b+='.';
    		b+=towlower(a[i]);
    	}
    }
    
    cout<<b;
    return 0;
}