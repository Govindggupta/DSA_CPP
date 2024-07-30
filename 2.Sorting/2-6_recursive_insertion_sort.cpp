#include <bits/stdc++.h>
using namespace std;

void rec_insertion_sort(vector<int> &arr , int n , int i = 0) {

    if (i == n) {
        return ;
    }

    int j = i ;
    while (j > 0 && arr[j-1] > arr[j]) {
        int temp = arr[j-1] ;
        arr[j-1] = arr[j] ;
        arr[j] = temp ;
        j--;
    }

    rec_insertion_sort(arr , n , i+1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " value :" ;
        cin >> array[i];
    }

    rec_insertion_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

// Time Complexity: O(N2), (where N = size of the array), for the worst, and average cases.
// The Best case : if the given array is already sorted. And if the given array is already sorted, the recursion calls will only occur and inside the recursive function, the loop will run for 0 times(as each element is already present in its correct position). 
// So, our overall time complexity in the best case will boil down to "O(N)", where N = size of the array.

// Space Complexity: O(N) auxiliary stack space.