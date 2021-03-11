#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define pb push_back

int main(){
  int t=0; cin >> t;
  
  while(t--){
    lli n=0; cin>>n;
    lli x=0, y=0;
    vector<lli>x_points;
    vector<lli>y_points;
    double total_sum = 0;
    
    for(lli i=0; i<(2*n); i++){
      cin >> x >> y;
      if(x==0) y_points.push_back(abs(y));
      else  x_points.push_back(abs(x));
    }
      
    sort(x_points.begin(),x_points.end());
    sort(y_points.begin(),y_points.end());
    
    for(int i=0; i<n; i++){
      total_sum+=double(sqrt(pow(x_points[i],2)+pow(y_points[i],2)));     
    }
    
    cout << setprecision(12) << fixed << total_sum << "\n";
  }
  return 0;
}