#include <bits/stdc++.h>
using namespace std;

int sum=0;

int sums(int product){
  sum=0;
  while(product!=0){
      sum+=product%10;
      product/=10;
    }
  return sum;
}

int main(){
  int t=0; cin >> t;

  while(t--){
    int n=0;cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
      int aux=0; cin >> aux;
      a.push_back(aux);
    }

    int product=0;

    int maxi_sum=0;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i!=j){
          product=a[i]*a[j];
          sums(product);
          maxi_sum=max(maxi_sum,sum);
        }
      }
    }
      cout << maxi_sum << "\n";
  }

  return 0;
}