#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    
    int max;
    
    if(a>=b and a>=c and a>=d){
        max = a;
    }else if(b>=a and b>=c and b>=d){
        max = b;
    }else if(c>=a and c>=b and c>=d){
        max = c;
    }else if(d>=a and d>=b and d>=c){
        max = d;    
    }
    return max;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;
    
    return 0;
}
