#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cin >> n ; 

    vector<vector<int>> arr(n, vector<int>(n)); 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j] ;  
        }
    }
    

    int sum = 0 ;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i] ; 
    }


    cout << sum << endl ;
    return 0;
}