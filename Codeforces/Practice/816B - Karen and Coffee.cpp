#include <bits/stdc++.h>
using namespace std;

const int MAX=2e5+5;

int main(){
  int n=0, k=0, q=0;
  cin >> n >> k >> q;
  vector<int>temp(MAX+1);

  // Recipes
  while(n--){
    int l=0, r=0;
    cin >> l >> r;
    temp[l]++;
    temp[r+1]--;
  }

  int prefix=0;
  // Marks
  for(int i=0; i<=MAX; i++){
    prefix+=temp[i];
    if(prefix>=k) temp[i]=1;
    else temp[i]=0;
  }

  // Prefix
  for(int i=1; i<=MAX; i++)
    temp[i]+=temp[i-1];

  while(q--){
    int a=0, b=0;
    cin >> a >> b;
    // if(temp[a]>=k && temp[b]>=k) valid++;
    cout << temp[b]-temp[a-1] << "\n";
  }

  return 0;
}
