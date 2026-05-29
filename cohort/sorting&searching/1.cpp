#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n ; 
    cin >> n ; 

    vector<long long> v(n); 

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long x; 
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            cout << "YES"<< endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}