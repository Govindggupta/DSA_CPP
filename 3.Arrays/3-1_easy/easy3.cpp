#include <bits/stdc++.h>
using namespace std;

// 11. longest subarray  with sum K
// brutte force
int longestSubArrWithSumK(vector<int> &arr, int k)
{
    int n = arr.size();
    int maxlength = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == k)
                maxlength = max(maxlength, j - i + 1);
        }
    }
    return maxlength;

    // time : O(n^2)
    // space : O(1)
}

// better (hashing)






int main()
{
    return 0;
}