
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ; 

    while (t > 0 )
    {
        int n ; 
        cin >> n ; 

        int arr[n] ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] ;
        }

        
        int alternate_arr[n] ;
        for (int i = 0; i + 1 < n; i += 2)
        {
            alternate_arr[i] = arr[i+1] ;
            alternate_arr[i+1] = arr[i] ;
        }

        if (n % 2 != 0)
        {
            alternate_arr[n-1] = arr[n-1] ;
        }

        for (int i = 0; i < n; i++)
        {
            cout << alternate_arr[i] << " " ;
        }

        cout << endl;
        
        t-- ;
    }
    
    return 0;
}