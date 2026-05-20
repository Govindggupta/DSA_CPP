#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;

    long long temp = a ; 
    int len = to_string(a).length();
    long long reverse = 0;

    for (int i = 0; i < len; i++) {
        reverse *= 10;
        reverse += a % 10;
        a /= 10;
    }
    if ( reverse == temp ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}