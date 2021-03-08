#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

bool Binary_Search(vector<lli>&sequence, lli value){
  int low=0;
  int high=sequence.size()-1;

  while(low<=high){
    int mid=(low+high)>>1;
    int x=sequence.at(mid);

    // Cases
    if(sequence.at(mid)==value) return true;
    (sequence.at(mid)<value) ? low=(mid+1) : high=(mid-1);
  }
  return false;
}

int main(){
  lli n=0, m=0, a=0, c=0, x_0=0;
  cin >> n >> m >> a >> c >> x_0;
  vector<lli>sequence(n);
  
  for(int i=0; i<n; i++){
    sequence.at(i)=((a*x_0)+c)%m;
    x_0=sequence.at(i);
  }

  int ans = 0;

  for(int i=0; i<n; i++){
    if(Binary_Search(sequence,sequence.at(i))!=false){
      ans++;
    }
  }

  cout << ans << "\n";
  return 0;
}

  
