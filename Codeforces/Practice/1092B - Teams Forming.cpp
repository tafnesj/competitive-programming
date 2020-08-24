#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, problems=0;
  cin >> n;
  vector<int>students;

  for(int i=0; i<n; i++){
    int std=0;
    cin >> std; 
    students.push_back(std);
  }
  
  sort(students.begin(), students.end());
  
  for(int i=0; i<n; i++){
    problems+=abs(students[i]-students[i+1]);
    i++;
  }

  cout << problems;
  return 0;
}