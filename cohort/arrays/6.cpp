#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ; 

    while (t > 0 )
    {
        int n ; 
        cin >> n ; 

        int arr[n]; 
        int mid = (n + 1) / 2;

        int odd = 1 ; 
        int even = 2 ;
        for (int i = 0; i < mid ; i++)
        {
            arr[i] = odd ; 
            odd += 2 ;
        }

        for (int i = n - 1 ; i >= mid ; i--)
        {
            arr[i] = even ;
            even += 2 ;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " " ;
        }

        cout << endl;

        t-- ;
    }
    
    return 0;
}