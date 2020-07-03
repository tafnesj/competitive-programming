#include <bits/stdc++.h> 
using namespace std;

int main(){
    string dubsted={};
    cin >> dubsted;
    int i=0;

    while(i<dubsted.size()){
        if(dubsted[i]=='W' && dubsted[i+1]=='U' && dubsted[i+2]=='B'){
            i+=3;
        }else{
            cout << dubsted[i];
            
            if(dubsted[i+1]=='W' && dubsted[i+2]=='U' && dubsted[i+3]=='B')
                cout<<" ";
                i++;
        }
    }
    return 0;
}