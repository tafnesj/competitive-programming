#include<bits/stdc++.h>
using namespace std;

int main(){
    
	long long n,a,b,m,max=0;
	vector<pair<long long,long long>> elements;
	cin >> n;

	for(int i=0;i<n;i++){
		cin>> a>> b;
		elements.push_back(make_pair(a,b));
	}
	
	cin >> m;
	
	for(int i=0; i<m; i++){
		cin >> a >> b;
		elements.push_back(make_pair(a,b));
	}
	
	sort(elements.begin(),elements.end());
	
	for(int i=0; i<elements.size()-1; i++){
		if(elements[i].first!=elements[i+1].first){
			max+=elements[i].second;
		}
		if(elements[i].first==elements[i+1].first){
			max+=elements[i+1].second;
			i++;
		}
	}
	
	if(elements[elements.size()-2].first!=elements[elements.size()-1].first){
			max+=elements[elements.size()-1].second;
	}
	
	cout<<max;
	return 0;
}