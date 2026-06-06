#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> small, large;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            small.push_back(i);

            if (i != n / i) {
                large.push_back(n / i);
            }
        }
    }

    vector<long long> factors;

    for (long long x : small) {
        factors.push_back(x);
    }

    for (int i = (int)large.size() - 1; i >= 0; i--) {
        factors.push_back(large[i]);
    }

    if (k > factors.size()) {
        cout << -1 << '\n';
    } else {
        cout << factors[k - 1] << '\n';
    }

    return 0;
}