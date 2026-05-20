#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;

    int len = to_string(a).length();

    for (int i = 0; i < len; i++) {
        cout << a % 10;
        a /= 10;
    }

    return 0;
}