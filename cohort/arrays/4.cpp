#include <bits/stdc++.h>
using namespace std;

int main() {
    int t , n ; 
    cin >> t ; 

    while (t > 0)
    {
        cin >> n; 

        int arr[n] ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] ;
        }

        int c1 = 0 , c0 = 0; 

        for (int i = 0 ; i < n ; i++) {
            if (arr[i] == 1) {
                c1++ ;
            }
            else {
                c0++ ;
            }
        }

        for ( int i = 0; i < c0; i++)
        {
            cout << 0 << " " ;
        }
        for (int i = 0; i < c1; i++)
        {
            cout << 1 << " " ;
        }   
        cout << endl;
        t-- ;
    }
    

    return 0;
}