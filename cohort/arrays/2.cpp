#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , num ; 

    cin >> n >> num ;

    long long arr[n]; 
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    int occurance = 0 ; 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num ) { 
            occurance++ ;
        }
    }
    
    cout << occurance <<endl ;

    return 0;
}