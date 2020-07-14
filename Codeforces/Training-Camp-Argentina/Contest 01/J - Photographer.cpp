#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n=0, aux=0, x=0, x0=0;
	long long b=0,a=0,tot=0;
	pair<long long ,long long>photo[100010];
	vector<int>photo1;
	cin>>n>>aux>>a>>b;
	for(int i=0; i<n; i++){
		cin>> x >> x0;
		x*=a;
		x0*=b;
		photo[i].first=x+x0;
		photo[i].second=i+1;
	}
	sort(photo,photo+n);
	for(int i=0; i<n; i++){
		if((tot+photo[i].first)<=aux){
		    photo1.push_back(photo[i].second),tot+=photo[i].first;
		}else{
		    break;
		}
	}
	cout << photo1.size() << '\n';
	for(int i=0; i<photo1.size(); i++){
	    cout << photo1[i] << " ";  
	}
	cout<< '\n';
	return 0;
}