#include <bits/stdc++.h>
using namespace std;

int main() {
    int q ; 
    cin >> q; 

    while (q > 0) {
        int t;
        long long l, r;
        cin >> t >> l >> r;
        
        long long count = 0;
        
        if (l <= r) {
            if (t == 1) {
                count = r - l - 1;
            } else if (t == 2) {
                count = r - l;
            } else if (t == 3) {
                count = r - l;
            } else { // t == 4
                count = r - l + 1;
            }
        }
        
        cout << count << endl;
        q--;
    }

    return 0;
}