#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    if (n == 1) {

        for (int j = 0; j < m; j++) {
            cout << arr[0][j] << " ";
        }
    }

    else if (m == 1) {
        for (int i = 0; i < n; i++) {
            cout << arr[i][0] << " ";
        }
    }

    else {

        for (int j = 0; j < m; j++) {
            cout << arr[0][j] << " ";
        }

        for (int i = 1; i < n; i++) {
            cout << arr[i][m - 1] << " ";
        }

        for (int j = m - 2; j >= 0; j--) {
            cout << arr[n - 1][j] << " ";
        }

        for (int i = n - 2; i >= 1; i--) {
            cout << arr[i][0] << " ";
        }
    }

    return 0;
}