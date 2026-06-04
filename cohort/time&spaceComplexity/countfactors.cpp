#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long count = 0;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i == n / i)
                count += 1; 
            else
                count += 2; 
        }
    }

    cout << count << '\n';

    return 0;
}