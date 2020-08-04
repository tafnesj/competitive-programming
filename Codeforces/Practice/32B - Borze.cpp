#include <bits/stdc++.h>
using namespace std;

int main(){
    int size=0; 
    string code;
    cin >> code;
    
    size = code.size();
    
    for(int i=0; i<size; i++)
    {
        if(code[i]=='.'){
            cout << "0";
        }else if(code[i]=='-' && code[i+1]=='.'){
            cout <<"1";
            i+=1;
        }else if(code[i]=='-' && code[i+1]=='-'){
            cout <<"2";
            i+=1;
        }
    }
return 0;
}