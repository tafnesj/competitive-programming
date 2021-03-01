#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int lowestTriangle(int base, int min_area){
  int height=0;
  min_area=min_area*2;

  (min_area%base!=0)?height=((min_area/base)+1):height=min_area/base;

  return height;
}

int main() {
  lli base; cin >> base;
  lli min_area; cin >> min_area;
  lli height=lowestTriangle(base, min_area);

  cout << height << "\n";
  return 0;
}