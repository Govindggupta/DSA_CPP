#include <bits/stdc++.h>
using namespace std;
// 1. find the largest number
int largest(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

// 2. find the second largest
int slargest(vector<int> &arr, int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

// 3. check if array is sorted or not
bool sorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i-1] =< arr[i])
        {
        }
        else
            return false;
    }
    return true;
}


// 4. remove the duplicates / 
int removeDuplicates(vector<int> &arr){
    for (int j=1 ; j<arr.size() ; j++) {
        int i = 0 ;
        if (arr[i] != arr[j]){
            arr[i+1] = arr[j] ;
            i++;
        }
    }
    return i+1 ; 
}




int main()
{
    // largest();
    // slargest();
    // sorted();
    // removeDuplicates();
}
