#include <bits/stdc++.h>
using namespace std;
using lli = long long int;

int main(){
  int mass=0;
  lli sum_fuel=0;
  lli sum_extra_fuel=0;

  while(cin >> mass){
    // Part 01
    int fuel=0;
    fuel = (mass/3)-2;
    sum_fuel+=fuel;

    // Part 02
    int fuel_extra=0;
    fuel_extra = (mass/3)-2;
    sum_extra_fuel+=fuel_extra;

    while(fuel_extra>=0){
      fuel_extra = (fuel_extra/3)-2;
      if(fuel_extra>0) sum_extra_fuel+=fuel_extra;
    }
  }

  cout << "| Part 01 |" << " Sum of the fuel requirements: " << sum_fuel << "\n"; 
  cout << "| Part 02 |" << " Sum of the fuel requirements + extra fuel: " << sum_extra_fuel << "\n"; 

  return 0;
}