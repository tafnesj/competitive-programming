#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0, size=0;
    string cad;
    cin >> t;

while(t--)
{
    cin>>cad;
    //cout<<cad;
    size = cad.size();
    //cout<<size;
    for(int i=0; i<size; i++){
            if(i%2==0)
            {
                cout << cad[i];
            }
        }

    cout << " ";
    
    for(int i=0; i<size; i++){
            if(i%2!=0)
            {
                cout << cad[i];
            }
        }
    cout << endl;
}
    return 0;
}