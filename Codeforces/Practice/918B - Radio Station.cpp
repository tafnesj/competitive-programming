#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, m=0; 
  cin >> n >> m;
  map<string, string>ip_name;
  map<string, string>::iterator it; 

  for(int i=0; i<n; i++){
    string name, ip;
    cin >> name >> ip;
    ip+=";";
    ip_name.insert({ip, name});
  }

  for(int i=0; i<m; i++){
    string command, ip;
    cin >> command >> ip;
    it = ip_name.find(ip);
    cout << command << " " << it->first << " #" << it->second << "\n";
  }
  return 0;
}