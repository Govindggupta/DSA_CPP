#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;

    int len = to_string(a).length();
    long long reversed = 0;

    for (int i = 0; i < len; i++) {
        reversed *= 10;
        reversed += a % 10;
        a /= 10;
    }

    cout << reversed << endl;
    return 0;
}