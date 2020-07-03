#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s){

    int resul;
    string aux;
    string aux1;
    aux1 = s.substr(2,6);

    if(s[8]=='P'){
        aux = s.substr(0,2);
        resul = stoi(aux);
        if(resul==12){
            s = s.substr(0,8);
        }else{
        resul = stoi(aux)+12;
        aux = std::to_string(resul);
        s = aux + aux1;
        }
    }else if(s[8]=='A'){
         aux = s.substr(0,2);
         resul = stoi(aux);
         if(resul==12){
             string res = "00";
             s = res + aux1;
         }else
         s = s.substr(0,8);
    }
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    cout << timeConversion(s);

    return 0;
}