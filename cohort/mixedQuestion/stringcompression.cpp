#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ; 
    while (t > 0 ) {
        string s; 
        cin >> s ;

        int n  = s.size();

        int  i = 0 ; 

        while ( i < n ) {
            int j = i ;
            int cnt = 0 ;
            while ( j < n  && s[i] == s[j]) {
                cnt++;
                j++;
            }
            if (cnt == 1) {
                cout << s[i] ;
            }
            else {
                cout << s[i] << cnt ;
            }
            i = j ; 
        }
        cout << '\n' ;

        t--;
    }
    return 0;
}