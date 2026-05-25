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

        long long ans = 0;

        for (int i = 0; i < N; i++) {

            int target = X - arr[i];

            map<int, int> freq2;

            for (int j = i + 1; j < N; j++) {

                int need2 = target - arr[j];

                ans += freq2[need2];

                freq2[arr[j]]++;
            }
        }

        cout << ans << endl;
    }
}