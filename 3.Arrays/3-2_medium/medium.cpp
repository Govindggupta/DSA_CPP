#include <bits/stdc++.h>
using namespace std;

// 1. 2Sum
// brutte force
void twoSum(vector<int> &arr, int target, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i == j)
                continue;
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
            }
        }
    }
    // time: O(n2)
}

// better
// (hashing)
vector<int> twoSum(int n, vector<int> &arr, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {-1, -1};

    // time : O(nlogn)-->map or O(n)/O(n2) --> unordered map
}

// optimal
// (greedy approach)
vector<int> twoSum(vector<int> &arr, int target, int n)
{
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return {left, right};
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
    return {-1, -1};

    // time : O(n)+ O(nlogn)
    // space : O(1)
}



// 2. Sort an array of 0's 1's & 2's
// brutte force
// by merge sort
// time : O(nlogn)
// space : O(n)

// better
void sortColor(vector<int> &arr)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (a[i] == 0)
            cnt0++;
        else if (a[i] == 1)
            cnt1++;
        else
            (a[i] == 2) cnt2++;
    }

    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i] = 1;
    }
    for (int i = cnt0 + cnt1; i < n; i++)
    {
        arr[i] = 2;
    }

    // time : O(2n)
}

// optimal
// DNF Algo (dutch national flag algo)
void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , mid = 0 , high = n-1;
        while (mid <=  high){
            if (nums[mid] == 0 ) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) mid++ ;
            else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }

int main()
{
    twoSum();

    sortColors();
    
    return 0;
}