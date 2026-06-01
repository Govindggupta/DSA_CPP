#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << -1 << endl;
    } else {
        cout << secondLargest << endl;
    }

    return 0;
}