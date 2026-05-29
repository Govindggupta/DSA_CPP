#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cin >> n ; 

    vector < string > arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    string target;
    cin >> target;

    int l = 0 ; 
    int r = n-1 ; 

    while (l <= r ) 
    {
        
        int mid = (l + r) / 2 ;

        if (arr[mid] == target) {
            cout << "YES" << endl;
            return 0; 
        } 
        else if (arr[mid] > target) {
            r = mid - 1 ;
        }

        else {
            // array[mid] < target 
            l = mid + 1 ; 
        }
        
    }
    
    cout << "NO" << endl;
    return 0;
}