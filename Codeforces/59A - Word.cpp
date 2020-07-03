#include <bits/stdc++.h> 
using namespace std;

int main(){
    int lower=0, upper=0;
    string word;
    cin >> word;

    for(int i=0; i<word.size(); i++){
        if(word[i]>= 'A' && word[i] <= 'Z'){
            upper = upper + 1;
        }
        if(word[i]>= 'a' && word[i] <= 'z'){
            lower = lower + 1;
        }
    }

    for(int i=0; i<word.size(); i++){
            if(lower>=upper){
            word[i] = tolower(word[i]);
        }else{
            word[i] = toupper(word[i]);
        }
    }

    cout << word;
    
return 0;
}