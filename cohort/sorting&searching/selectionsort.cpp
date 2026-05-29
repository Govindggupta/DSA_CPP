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

    for (int i = 0; i <= n-2; i++)
    {
        int min = i ; 
        int minimum_number = arr[min];
        for (int j = i+1; j <= n-1; j++)
        {
            if (arr[j] < arr[min]) {
                min = j ;
                minimum_number = arr[min];
            }
        }
        swap(arr[i], arr[min]) ;    

        cout << "Pass " << i+1 << ": ";
        for (int k : arr) cout << k << " "; 
        cout << ", min_selected = " << minimum_number << endl; 
    }
    
    return 0;
}