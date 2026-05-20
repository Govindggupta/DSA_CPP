#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;

    int len = to_string(a).length();
    long long sum = 0 ; 

    for (int i = 0; i < len; i++) {
        sum += a % 10;
        a /= 10;
    }
    cout << sum << endl;

    return 0;
}