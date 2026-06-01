#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin , s );

    int n = s.size();
    int cnt = 0 ; 
    int longest = 0 ;

    for (int i = 0 ; i < n ; i++) {
        if (s[i] == ' ') {
            if (cnt > longest) {
                longest = cnt ;
            }
            cnt = 0 ;
        }
        else {
            cnt++;
        }
    }

    if (cnt > longest) {
        longest = cnt;
    }

    cout << longest << '\n' ;
    
    return 0;
}