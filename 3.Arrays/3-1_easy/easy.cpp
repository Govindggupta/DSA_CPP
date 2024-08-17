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
        if (arr[i - 1] = < arr[i])
        {
        }
        else
            return false;
    }
    return true;
}

// 4. remove the duplicates /
int removeDuplicates(vector<int> &arr)
{
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

// 5. left rotate array by one place
vector<int> rotateArray(vectore<int> &arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}

// 6. left rotate array by n place
// method 1
void rotateArrayN(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d % n;

    vector<int> temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i]
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }

    // time complexity = O(n+d) => O(d)+ O(n-d) + O(d)
    // space complexity = O(d)
}

// method 2 (optimal)
void rotateArrayByN(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d % n;

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin() + n);
    reverse(arr.begin(), arr.end());

    // time complexity = O(2n)
    // space complexity = O(1)
    // time comp. increased and space comp. decreased
}

// 7. move Zero to the end
// brutte force solution
void moveZero(vector<int> &arr)
{
    int n = arr.size();

    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.emplace_back(arr[i]);
        }
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        arr[i] = o;
    }
    // time : 2n
    // space : N (worst);
}

// optimal
void movezero(vector<int> &arr)
{
    int n = arr.size();
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            j = i ;
            break;
        }
    }
    if (j == -1 ) return ;

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    // time : n
    // space : 1

}

int main()
{
    // largest();
    // slargest();
    // sorted();
    // removeDuplicates();
    // rotateArray();

    // rotateArrayN();
    // rotateArrayByN();

    // moveZero();
    // movezero();
}
