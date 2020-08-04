#include <bits/stdc++.h> 
using namespace std;

int main(){
    
    int n=0, t=0, x=0;
    cin >> n >> t;
    char childrens[n];
    cin >> childrens;
    
    while(x<t){
        x++;
        
        for(int i=0; i<n; i++)
        {
            if(childrens[i]=='B' and childrens[i+1]=='G')
            {
                swap(childrens[i], childrens[i+1]); 
                i+=1;
            }
            if(childrens[i]=='G' and childrens[i+1]=='B' or childrens[i]=='G' and childrens[i+1]=='G'){
                childrens[i]='G';
            }
        }
    }
        for(int i=0; i<n; i++){
            cout << childrens[i];
        }

return 0;
}