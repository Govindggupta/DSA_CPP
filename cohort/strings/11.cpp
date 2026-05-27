#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    cin >> s ; 

    string temp; 
    temp = s ;

    for (int i = 0; i < s.size()/2; i++)
    {
        swap(s[i], s[s.size() - 1 - i]);    
    }

    if ( s == temp) cout << "YES"; 
    else cout << "NO";
    return 0;
}