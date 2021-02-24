#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=0; cin >> n;
  vector<int>cities(n);
  
  for(int i=0; i<n; i++){
    cin >> cities.at(i);
  }
  
  // Distances
  for(int i=0; i<n; i++){
    int first_element=0;
    int last_element=0;
    int aux_element=0;
    // First element
    if(i==0){
      // Min element
      cout << abs(cities.at(0)+((-1)*cities.at(i+1)));
      cout << " ";
      // Max element
      cout << abs(cities.at(0)+((-1)*cities.at(n-1)));
    }else if(i!=(n-1)){
      first_element=abs(cities.at(i)+((-1)*cities.at(0)));
      last_element=abs(cities.at(i)+((-1)*cities.at(n-1)));
      aux_element=abs(cities.at(i)+((-1)*cities.at(i+1)));
      aux_element=min(aux_element,abs(cities.at(i)+((-1)*cities.at(i-1))));
      // Min element
      cout << min({first_element,last_element,aux_element});
      cout << " "; 
      // Max element
      cout << max({first_element,last_element,aux_element});
    }else if(i==(n-1)){
      // Min element
      cout << abs(cities.at(n-1)+((-1)*cities.at(n-2)));
      cout << " ";
      // Max element
      cout << abs(cities.at(n-1)+((-1)*cities.at(0)));
    }
    cout << "\n";
  }
  return 0;
}