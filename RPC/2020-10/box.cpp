#include <bits/stdc++.h>
using namespace std;

int main(){
  int b=0, r=0, height=0;
  cin >> b >> r;
  vector<int>box(b+1);

  for(int i=0; i<r; i++){
    int h=0, v=0, c=0, auxHeight=0;
    cin >> h >> v >> c;

    for(int j=c; j<c+h; j++){
      auxHeight = max(auxHeight,box[j]);
    }
      auxHeight+=v;

    for(int k=c; k<c+h; k++){
      box[k]=auxHeight;
    }
  }

  cout << *max_element(box.begin(),box.end()) << '\n';
  return 0;
}