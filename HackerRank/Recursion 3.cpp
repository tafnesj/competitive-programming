#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n<0){
        return 0;
    }else if(n>0){
        return n* factorial(n-1);
    }else 
        return 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int result = factorial(n);

    fout << result << "\n";
    fout.close();

    return 0;
}