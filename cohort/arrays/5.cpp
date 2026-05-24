#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cin >> n ; 

    int arr[n] ; 

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    int rev_arr[n] ;
    for (int i = 0; i < n; i++)
    {
        rev_arr[i] = arr[n-1-i] ;
    }

    for (int i = 0; i < n; i++)
    {
        cout << rev_arr[i] << " " ;
    }
    return 0 ; 
}