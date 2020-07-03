#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,sum1=0,sum2=0;
    cin >> n; 
    m = n;
    int num[n][m];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> num[i][j];
    
            if(i==j){
                sum1 = sum1+num[i][j];
            }
            if((i+j) == (n-1)){
                sum2 = sum2+num[i][j];
            }
        }
    }
    sum1-=sum2;
    cout<< abs(sum1) <<endl;
    return 0;
}