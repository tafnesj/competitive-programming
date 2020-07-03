#include <bits/stdc++.h> 
using namespace std;

int main(){
    
    int cont=0, size=0;
    string num;
    cin >> num;

    size = num.size();
        
        for(int i=0; i<size; i++){

            if(num[i]=='1' and num[i+1]=='4' and num[i+2]=='4'){
                cont = cont+ 3;
                i+=2;
            }else if(num[i]=='1' and num[i+1]=='4' and num[i+2]!='4'){
                cont = cont+ 2;
                i+=1;
            }else if(num[i]=='1' and num[i+1]!='4'){
                cont = cont+ 1;
            }
        }

        if(cont == size){
            cout << "YES";
        }else
            cout << "NO";

return 0;
}