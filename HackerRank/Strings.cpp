#include <bits/stdc++.h>
using namespace std;

int main(){
	
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    swap(a[0], b[0]);

    for(int i=0; i<a.size(); i++){
        //swap( a[0], b[0] );
        cout << a[i]; 
    }
    cout << " ";

    for(int i=0; i<b.size(); i++){
        //swap(a[0], b[0]);
        cout << b[i]; 
    }

    return 0;
}