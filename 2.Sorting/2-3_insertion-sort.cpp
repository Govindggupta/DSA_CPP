#include <bits/stdc++.h>
using namespace std;

// Insertion sort: takes an element and places it in its correct order

void insertion_sort(vector<int> &array, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && array[j - 1] > array[j])
        {
            int temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;

            j--;
        }
    }
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

    insertion_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
// the inner loop will run like this;
// [0 --> n)
// [1 --> n)
// [2 --> n)
// [3 --> n) and so on.
// time complexity ---> summation will be around n(n+1)/2
// time complexity ---> O(n^2) ---> for worst and avg case.
// time complexity ---> O(n) ---> for best case.