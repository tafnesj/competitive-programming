#include <bits/stdc++.h>
using namespace std;

int camelcase(string s, int size) {
    int total=1;
    for(int i=0; i<size; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            total = total + 1;
        }
    }
    return total;
}

int main()
{
    string s;
    getline(cin, s); 
    //cout << s;
    int size = s.size();
    int result = camelcase(s, size);
    cout << result << endl;

    return 0;
}
