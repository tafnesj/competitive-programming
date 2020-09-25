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
    int l=-1, r=n, m;
    while(l+1<r){
      m = (l+r)>>1;
      if(nums[m]<=x){
        l=m;
      }else{
        r=m;
      }
    }
    
    if(l == -1){
      cout << 0 << endl;
    }else {
      cout << l+1 << endl;
    }
  }

  return 0;
}