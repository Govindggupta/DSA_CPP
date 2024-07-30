#include <bits/stdc++.h>
using namespace std;

// Recursive bibble sort 

void rec_bubble_sort(vector<int> &arr , int n) {
    if (n ==  1) {
        return;
    }

    for (int j = 0; j <= n-2; j++)
    {
        if (arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp ;
        }

        rec_bubble_sort(arr , n-1) ;
    }
    
}


    int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " value :";
        cin >> array[i];
    }

    rec_bubble_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " " ;
    }
    
    return 0;
}
// Time Complexity: O(N2), (where N = size of the array), for the worst, and average cases.
// for best case : If the array is already sorted no swap will occur and we will return from the recursion call. 
// Thus the number of recursions will be just 1. And our overall time complexity will be O(N).

// Space Complexity: O(N) auxiliary stack space.

