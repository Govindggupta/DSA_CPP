#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (arr[i] <= pivot && i < high) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

void quick_sort(vector<int> &arr) {
    qs(arr, 0, arr.size() - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter value for element " << i << ": ";
        cin >> arr[i];
    }

    quick_sort(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity : Nlog2(N) 2 is base 
// why this is explained in merge sort 

// Space Complexity : O(1) 