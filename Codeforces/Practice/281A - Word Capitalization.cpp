#include <bits/stdc++.h> 
using namespace std;

int main(){
    
    string word;
    cin >> word;

    for(int i=0; i<word.size(); i++){
            if(word[i]>= 'a' && word[i] <= 'z'){
                word[0] = toupper(word[0]);
            }
    }

    cout << word;
    
return 0;
}