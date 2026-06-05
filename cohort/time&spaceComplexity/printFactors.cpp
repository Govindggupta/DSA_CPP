#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> small, large;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            small.push_back(i);

            if (i != n / i) {
                large.push_back(n / i);
            }
        }
    }

    for (long long x : small) {
        cout << x << " ";
    }

    for (int i = large.size() - 1; i >= 0; i--) {
        cout << large[i] << " ";
    }

    cout << '\n';

    return 0;
}