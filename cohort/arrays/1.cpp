#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , x ; 
    cin >> n >> x ; 

    long long arr[n]; 
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
            cout << "YES" << endl;
            break;
        }
        if(i == n-1){
            cout << "NO" << endl;
        }
    }   
    return 0;
}