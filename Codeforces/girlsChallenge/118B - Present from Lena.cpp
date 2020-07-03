#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0;
  cin >> n;
     
  for(int i=0;i<=n;i++){
    for(int j=i;j<n;j++){
      cout<<"  ";
    }
                
    for(int j=0; j<=i; j++){
      cout << j;
      if(i!=0){
        cout << " ";
      }
    }
              
    for(int j=i-1; j>=0; j--){
      cout<<j;
      if(j>0){
        cout<<" ";  
      }
    }
      cout << endl;
  }
      
  for(int i=n-1; i>=0; i--){
    for(int j=n-1;j>=i;j--){
      cout<<"  "; 
    }
    for(int k=0;k<=i;k++){
      cout << k;
      if(i!=0){
        cout << " ";
      }
    }
    for(int k=i-1; k>=0; k--){
      cout<<k;
      if(k>0){
        cout<<" ";   
      }
    }
      cout<<"\n";
  }
  
  return 0;
}

