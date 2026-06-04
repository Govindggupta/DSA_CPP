#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int j = 2; j <= n; j++) {
        bool isPrime = true;

        for (int i = 2; i * i <= j; i++) {
            if (j % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}