#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b){
    int res = *a - *b;
    *a = *a + *b;
    *b = abs(res);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl << b;

    return 0;
}
