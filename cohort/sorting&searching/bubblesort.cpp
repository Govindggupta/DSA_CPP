#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cin >> n ; 
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n-1; i >= 1; i--)
    {
        int swaps = 0 ;
        for (int j = 0; j <= i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }
        cout << "Pass " << n-i << ": ";
        for (int k : arr) cout << k << " ";
        cout << ", swaps = " << swaps << endl;
        if (swaps == 0) {
            break; 
        }

    }
    
    
    return 0;
}