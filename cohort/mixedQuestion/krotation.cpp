#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int k;
        cin >> k;

        rotate(arr.begin(), arr.begin() + k, arr.end());

        for (int x : arr) {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}