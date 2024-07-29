#include <bits/stdc++.h>
using namespace std;
// Merge sort
// -> Divide and Merge

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    // [low .. mid]
    // [mid+1 .. high]
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low] ;
    }
}

void ms(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void merge_sort(vector<int> &arr, int n)
{
    ms(arr, 0, n - 1);
}

int main() {
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " value :" ;
        cin >> arr[i] ;
    }

    merge_sort(arr , n);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0;
}

// time complexity --> O(n log2(n)) --> best wrost and avg 
// here log2(n) for merge sort and n for merging and combine it make this 


// Space complexity --> O ( n ) --> worst case 
// as we created a temp array every time when merge happens 