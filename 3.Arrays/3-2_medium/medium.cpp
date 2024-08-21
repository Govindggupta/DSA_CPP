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
                cout << i << " " << j ;
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
        if (mpp.find(more) != mpp.end()){
            return {mpp[more] ,i};
        }
        mpp[a] = i ;
    }
    return {-1 ,-1};
    
    // time : O(nlogn)-->map or O(n)/O(n2) --> unordered map 
}

// optimal
// (greedy approach)
vector<int> twoSum(vector<int> &arr , int target , int n){
    int left =0 , right =n-1 ;
    sort(arr.begin(), arr.end());
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return {left , right};
        }
        else if(sum < target) left++;
        else right--;
    }
    return {-1 , -1} ;
    
    // time : O(n)+ O(nlogn)
    // space : O(1)
}



int main()
{
    twoSum();
    
    return 0;
}