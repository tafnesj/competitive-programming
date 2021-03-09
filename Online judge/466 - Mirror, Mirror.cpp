#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0;
  while(cin>>n){
    int counter_aux=1;
    string original_patt;
    string transform_patt;
    bool improperly=true;

    for(int i=0; i<n; i++){
      cin >> original_patt;
      original_patt+=original_patt;
      cin >> transform_patt;
      transform_patt+=transform_patt;
    }

    int size_str=transform_patt.size();

    // Original
    if(original_patt==transform_patt){
      cout << "Pattern " << counter_aux << " was preserved." << "\n";
      continue;
    }

    int count_str=0;
    int count_str_2=0;
    int count_str_3=0;
    int start=0;

    // Other operations
    for(int i=0; i<size_str; i++){
      // Reflexive
      if(original_patt[i]==transform_patt[i+(n-1)]){
        count_str++;
      }
      if(count_str==size_str){
        improperly=false;
        cout << "Pattern " << counter_aux << " was reflected vertically." << "\n";
        continue;
      }

      // Rotate 90°
      int block=i/n;
      if(i%n==0){
        start=n-(block+1);
      }else{
        start+=n;
      }
      if(original_patt[i]==transform_patt[start]){
        count_str_2++;
      }
      if(count_str_2==size_str){
        improperly=false;
        cout << "Pattern " << counter_aux << " was rotated 90 degrees." << "\n";
        continue;
      }

      // Rotate 270°
      

      // Combination
      
      
    }
    
    // Rotate 180°
    reverse(original_patt.begin(), original_patt.end()); 
    if(original_patt==transform_patt){
      cout << "Pattern " << counter_aux << " was rotated 180 degrees." << "\n";
    }

    // Improperly
    if(improperly) cout << "Pattern " << counter_aux << " was improperly transformed." << "\n";
    
    counter_aux++;
  }

  return 0;
}