#include <bits/stdc++.h>
using namespace std;

int main(){
  string word;
  while(cin >> word){
    int crit = 0;
    int tam = word.size();
    string aux = word;
    string mirror = word;
    map<char, char> inverse;

    // Map content
    inverse['A'] = 'A';
    inverse['B'] = '$';
    inverse['C'] = '$';
    inverse['D'] = '$';
    inverse['E'] = '3';
    inverse['F'] = '$';
    inverse['G'] = '$';
    inverse['H'] = 'H';
    inverse['I'] = 'I';
    inverse['J'] = 'L';
    inverse['K'] = 'K';
    inverse['L'] = 'J';
    inverse['M'] = 'M';
    inverse['N'] = '$';
    inverse['O'] = 'O';
    inverse['P'] = '$';
    inverse['Q'] = '$';
    inverse['R'] = '$';
    inverse['S'] = '2';
    inverse['T'] = 'T';
    inverse['U'] = 'U';
    inverse['V'] = 'V';
    inverse['W'] = 'W';
    inverse['X'] = 'X';
    inverse['Y'] = 'Y';
    inverse['Z'] = '5';
    inverse['1'] = '1';
    inverse['2'] = 'S';
    inverse['3'] = 'E';
    inverse['4'] = '$';
    inverse['5'] = 'Z';
    inverse['6'] = '$';
    inverse['7'] = '$';
    inverse['8'] = '8';
    inverse['9'] = '9';

    // Exchange chars
    for(int i = 0; i < tam; i++) mirror.at(i) = inverse[mirror.at(i)];
    // Aux operators
    reverse(aux.begin(), aux.end());

    if(word != aux) crit+=0;
    if(mirror == aux) crit+=10;
    if(word == aux) crit+=1;

    // Not palindrome
    if(crit == 0) cout << word << " -- is not a palindrome.\n\n";
    // Regular palindrome
    if(crit == 1) cout << word << " -- is a regular palindrome.\n\n";
    // Mirrored string
    if(crit == 10) cout << word << " -- is a mirrored string.\n\n";
    // Mirrored palindrome
    if(crit ==11) cout << word << " -- is a mirrored palindrome.\n\n"; 
  }
  return 0;
}