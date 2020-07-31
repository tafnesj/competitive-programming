#include <bits/stdc++.h>
using namespace std;

int main(){
 
    int n=0, count=1, points=0;
    cin >> n;
    vector<pair<int,int>>cards;

    for(int i=0; i<n; i++){
        int a=0, b=0;
        cin >> a >> b;
        cards.push_back(make_pair(b,a));
    }

    sort(cards.begin(),cards.end());
    reverse(cards.begin(),cards.end());
  
    for(int i=0; i<n; i++){
        if(count==0){
            break;
        }
        points+=cards[i].second;
        count--;
        count+=cards[i].first;
        //cout << "Contador: " << count << '\n';
    }
    
    cout << points;
    return 0;
}