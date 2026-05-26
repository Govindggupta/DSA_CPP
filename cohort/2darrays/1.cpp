#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    int maxOnes = 0;
    int ans = -1;

    for (int i = 0; i < n; i++) {

        int count = 0;

        for (int j = 0; j < m; j++) {

            cin >> arr[i][j];

            if (arr[i][j] == 1) {
                count++;
            }
        }

        if (count > maxOnes) {
            maxOnes = count;
            ans = i;
        }
    }

    cout << ans << endl;
}