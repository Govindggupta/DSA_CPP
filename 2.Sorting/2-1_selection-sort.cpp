#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr , int n )
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[min] ;
        arr[min] = arr[i] ;
        arr[i] = temp ;
    }
}

int main()
{
    int n;
    cin >> n ;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter" << i << "value:";
        cin >> arr[i];
    }
    selection_sort(arr , n) ;
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0;
}

// the inner loop will run like this;
// [0 --> n)
// [1 --> n)
// [2 --> n)
// [3 --> n) and so on.
// time complexity ---> summation will be around n(n+1)/2
// time complexity ---> O(n^2) ---> for worst, best as well as avg case.