#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ; 
    cin >> s ; 

    char x; 
    cin >> x; 

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == x) {
            s.erase(i, 1);
            i--; 
        }
    }

    if (s.empty())
    {
        cout << " ";
    }
    else
    {
        cout << s;
    }
    return 0;
}