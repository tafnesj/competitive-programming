#include<bits/stdc++.h>
using namespace std;

int main(){
    int h=0,e=0,l1=0,l2=0,o=0;
    string s;
    cin>>s;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h'){
            h=1;
        }
        if(s[i]=='e'){
            if(h){
                e=1;
            }
        }
        if(s[i]=='l')
        {
            if(l1){
                l2=1;
            }else if(h and e){
                l1=1;
            }
        }
        if(s[i]=='o'){
            if(h and e and l1 and l2){
                o=1;
            }
        }    
    }

    if(h and e and l1 and l2 and o){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}