#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cal[n] = {};
    string aux = {};
    
    for(int i=0; i<n; i++){
      cin >> cal[i];
      //cout << cal[i];
      if(cal[i]<38){
        cout << cal[i] << endl;
      }else if(cal[i]>=38 && cal[i]%10>=8){
        int res = 10 - cal[i]%10;
        //cout << "res" << res << endl;
        cout << cal[i]+res << endl;
      }else if(cal[i]>=38 && cal[i]%10>=3 && cal[i]%10<5){
        int res = 5 - cal[i]%10;
        //cout << "res" << res << endl;
        cout << cal[i]+res << endl;
      }else if(cal[i]>=38 && cal[i]%10>=5 && cal[i]%10<8){
        cout << cal[i]<< endl;
      }else if(cal[i]>=38 && cal[i]%10>=0 && cal[i]%10<3){
        cout << cal[i]<< endl;
      }
    }

    return 0;
}