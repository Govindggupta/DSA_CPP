#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << pref[r] - pref[l - 1] << '\n';
    }

    return 0;
}
