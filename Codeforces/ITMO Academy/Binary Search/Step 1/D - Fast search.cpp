#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0;
  cin >> n;
  int nums[n-1];
  for (int i=0; i<n; i++){
    cin >> nums[i];
  }
  sort(nums, nums+n); 

  int k=0;
  cin >> k;

  while(k--){
    int a, b, m;
    cin >> a >> b;

    // Mínimo
    int l=-1, r=n;
    while(l+1<r){
      int m=(l+r)>>1;
      if(nums[m]<a){
        l=m;
      }else{
        r=m;
      }
    }
    int iMin = r+1;
    
    // Máximo
    int l=-1, r=n;
    while(l+1<r){
      int m=(l+r)>>1;
      if(nums[m]<=b){
        l=m;
      }else{
        r=m;
      }
    }
    int iMax = l+1;

    if(iMin==0 || iMax==n+1){
      cout << 0 << " ";
    }else{
      cout << (iMax-iMin)+1 << " ";
    }
    
  }

  return 0;
}