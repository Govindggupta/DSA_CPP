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


// better (hashing) and 
// 12. longest subarray with sum k (pos and neg)
int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        map<int , int> preSumMap ; 
        int sum = 0 ; 
        int maxlen = 0 ; 
        for (int i = 0 ; i < n ; i++) {
            sum += a[i] ; 
            if (sum == k) {
                maxlen = max(maxlen , i+1);
            }
            
            int rem = sum - k ; 
            if (preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem] ;
                maxlen = max(maxlen , len) ;
            }
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i ;
            }
        }
        return maxlen ;

        // time = (n * logn)
        // space : (n)
    } 


// optimal (greedy approach)
int longestSubArrWithSumK(vector<int> &arr , int n , int k) 
{
    int left = 0 ; 
    int right = 0 ; 
    int sum =0 ;
    int maxlen = 0 ;
    while (right<n) {
        while (left <= right  && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k) {
            maxlen = max(maxlen , right - left + 1) ; 
        }
        right++;
        if(right < n) sum += a[right] ;
    }
    return maxlen ;
}





int main()
{
    longestSubArrWithSumK();
    return 0;
}