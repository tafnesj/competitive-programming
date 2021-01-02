#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int t=1000;
  lli wrapping_paper=0;
  lli wrapping_ribbon=0;
  int minium_area=0;

  while(t--){
    int l=0,w=0,h=0;
    scanf("%dx%dx%d",&l,&w,&h);
    int square_l=0,square_w=0,square_h=0;

    // Part 01
    square_l=l*w;
    square_w=w*h;
    square_h=h*l;

    minium_area=min({square_l,square_w,square_h});
    wrapping_paper+=minium_area;

    square_l*=2;
    square_w*=2;
    square_h*=2;

    wrapping_paper+=square_l;
    wrapping_paper+=square_w;
    wrapping_paper+=square_h;

    // Part 02
    vector<int>min_area;
    min_area.push_back(l);
    min_area.push_back(w);
    min_area.push_back(h);

    sort(min_area.begin(),min_area.end());

    int area=l*w*h;
    int ribbon=(min_area.at(0)*2)+(min_area.at(1)*2);
    wrapping_ribbon+=area;
    wrapping_ribbon+=ribbon;
  }

  cout << "| Part 01 |" << " Square feet of wrapping paper: " << wrapping_paper << "\n"; 
  cout << "| Part 02 |" << " Feet of ribbon: " << wrapping_ribbon << "\n"; 

  return 0;
}