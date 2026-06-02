#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ; 

    while (t > 0) {
        long long l , r ;

        cin >> l >> r ; 

        cout << (r - l + 1) * (l + r) / 2 << endl ;

        t--;
    }
    return 0;
}