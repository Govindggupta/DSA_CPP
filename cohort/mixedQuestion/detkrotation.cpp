#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ; 

    while (t > 0) {
        int n ; 
        cin >> n ; 

        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        }

        bool found = false;
        for (int i = 0; i < n-1; i++) {
            if (arr[i] > arr[(i + 1)]) {
                cout << i + 1 << endl ;
                found = true;
                break ;
            }
        }

        if (!found) {
            cout << 0 << endl;
        }

        t--;
    }
    return 0;
}