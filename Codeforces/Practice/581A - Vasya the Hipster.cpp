#include <bits/stdc++.h>
using namespace std;

int main(){
  int a=0, b=0, dif=0;
  cin >> a >> b;

  cout << min(a,b) << " " << abs(a-b)/2;
  return 0;
}