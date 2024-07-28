#include <bits/stdc++.h>
using namespace std;

// bubble sort : pushes max to last by adjecent swaping

void bubble_sort(vector<int> &array, int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int didswap = 0 ;
        for (int j = 0; j <= i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                didswap = 1 ;
            }
        }
        if (didswap == 0 ) {
            break;
        } // this the best case (no swap)
        cout << "runs \n" ;

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

    bubble_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " " ;
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