#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n ; 
    cin >> n ; 

    vector<long long> array(n); 

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    long long x; 
    cin >> x;

    sort(array.begin(), array.end());   
    int l = 0 ;
    int r = n - 1; 

    while (l <= r) {
        
        int mid = (l + r) / 2 ;

        if (array[mid] == x) {
            cout << "YES" << endl;
            return 0; 
        } 
        else if (array[mid] > x) {
            r = mid - 1 ;
        }

        else {
            // array[mid] < x 
            l = mid + 1 ; 
        }
        
    }

    cout << "NO" << endl;
    return 0;
}