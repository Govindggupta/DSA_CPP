#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int X;
        cin >> X;

        map<int, int> freq;

        long long ans = 0;

        for (int i = 0; i < N; i++) {

            int need = X - arr[i];

            ans += freq[need];

            freq[arr[i]]++;
        }

        cout << ans << endl;
    }
}