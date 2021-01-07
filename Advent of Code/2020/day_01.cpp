#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int number=0;
  set<int>unique_numbers;
  vector<int>expense_report;
  
  while(cin>>number){
    expense_report.push_back(number);
    unique_numbers.insert(number);
  }

  // Part 01
  for(int i=0; i<expense_report.size(); i++){
    for(int j=i; j<expense_report.size(); j++){
      if(2020==(expense_report.at(i)+expense_report.at(j))){
        cout << "| Part 01 |" <<" Entries that sum to 2020: " << expense_report.at(i)*expense_report.at(j) << "\n";
      }
    }
  }

  // Part 02
  int product_2020=0;

  for(int i=0; i<expense_report.size(); i++){
    for(int j=i; j<expense_report.size(); j++){
      int subtraction=2020-(expense_report.at(i)+expense_report.at(j));
      if(unique_numbers.count(subtraction)){
        product_2020=expense_report.at(i)*expense_report.at(j)*subtraction;
      }
    }
  }
  
  cout << "| Part 02 |" << " Product of the three entries that sum to 2020: " << product_2020 << "\n";

  return 0;
}