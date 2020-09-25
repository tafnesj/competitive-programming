#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, k=0, x=0;
  cin >> n >> k;
  int nums[n-1];
  
  for(int i=0; i<n; i++){
    cin >> nums[i];
  }

  while(k--){
    cin >> x;
    int l=0, r=n-1, m;
    bool flag = false;
    while(l<=r){
      m=(l+r)>>1;
      if(nums[m]==x){
        flag = true;
        break;
      }
      if(nums[m]<x){
        l=m+1;
      }else{
        r=m-1;
      } 
    }
    if(flag){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }

  return 0;
}