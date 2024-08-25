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



// 3. Majority Element (>n/2 times)
// brutte force 
int majorityElement(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        int count = 0;

        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] == nums[i]) count++;
        }
        if(count > (nums.size() / 2)) return nums[i];
    }

    time : O(n2)
}

// better (hashing)
int majorElement(vector<int> &arr)
{
    map<int, int>mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (arr.size() / 2)){
            return it.first;
        }
    }
    return -1 ;

    // time : O(nlogn) + O(n);
    // space : O(n) (when all unique)
}

// optimal 
// Moorie's Voting Algo 
int majorElement(vector<int> &arr){
    int el ;
    int cnt = 0 ;
    for (int i = 0; i < arr.size(); i++)
    {
        if (cnt == 0) {
            cnt =1 ;
            el = v[i];
        }
        else if(v[i] == el){
            cnt++;
        }
        else {
            cnt-- ;
        }

    }
    int cnt1 = 0 ;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == el) cnt++ ;
    }
    if (cnt1 > (arr.size()/2)) return el ; 
    return -1 ;
    
    // time : O(n) + O(n)
    // space : O(1)
}



// 4. maximum subarray sum 
// Kadane's Algorithm
// brutte force | better 
int maxSubArrSum(vector<int> &arr) {
    int maxSum = 0 ;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0 ;
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];
            maxSum = max(maxSum, sum);
        }
        
    }
    return maxSum;

    // time :O(n2)
}

// optimal ( kadane's theorm)
int maxSubArrSum(vector<int> &arr) {
    int maxSum = 0 ;
    int sum = 0 ;
    for (auto it : arr) {
        sum = sum + it ;
        maxSum = max(maxSum , sum) ;
        if (sum < 0) sum = 0 ;
    }
    return maxSum;

    // time :O(n)
}



// 5. Best Time to Buy and Sell Stock
int maxProfit(vector<int> &arr) {
    int mini = arr[0] ;
    int maxProfit = 0 ;
    int n = arr.size
    for (int i = 0; i < n; i++)
    {
        int cost = arr[i] - mini ;
        maxProfit = max(maxProfit , cost) ;
        mini = min(mini , arr[i]);
    }
    return maxProfit; 
    
}



// 6.Rearrange the array in alternating positive and negative items
// brutte force | better
void rearrangeArray(vector<int> &arr){
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < arr.size; i++)
    {
        if(arr[i] >= 0) pos.emplace_back(arr[i]);
        else neg.emplace_back(arr[i]);
    }

    for(int i = 0 ; i < arr.size() / 2 ; i++) {
        arr[i*2] = pos[i];
        arr[(i*2)+1] = neg[i]; 
    }
    // time : O(2n) 
    // space : O(n)
}
 
// optimal 
vector<int> rearrangearray(vector<int> &arr ) {
    int n = arr.size();
    vector<int> ans(n , 0);
    int posindex = 0 , negIndex = 1 ;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i] < 0) {
            arr[negIndex] = arr[i];
            negIndex += 2;
        }
        else {
            arr[posindex] = arr[i];
            posindex += 2;
        }
    }
    return ans ;
    // time : O(n)
    // spce  O(n)
}

// 6.2 Variity 2 (if neg or pos are remaining )
void rearrangeArray(vector<int> &arr) {
    vector<int> pos;
    vector<int> neg;

    // Separate positive and negative numbers
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0) pos.emplace_back(arr[i]);
        else neg.emplace_back(arr[i]);
    }

    int i = 0, j = 0, k = 0;

    // Fill the array by alternating between positive and negative numbers
    while (i < pos.size() && j < neg.size()) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // If there are remaining positive numbers
    while (i < pos.size()) {
        arr[k++] = pos[i++];
    }

    // If there are remaining negative numbers
    while (j < neg.size()) {
        arr[k++] = neg[j++];
    }
}

   

// 7. Next Permutation
// brutte force 
// make all permutation --> linear search --> return next index 
// time : n! * n (very high order)

// optimal 
vector<int> nextPermutation(vector<int> &arr) {
    int n = arr.size() ;
    int index = -1 ;
    for (int i = n-2 ; i>=0 ; i--)
    {
        if (arr[i] < arr[i+1]) 
        {
            index = i ;
            break;
        }
    }
    if(index == -1)
    {
        reverse(arr.begin() , arr.end()) ;
        return arr;
    }

    for (int i=n-1 ; i>index ; i--)
    {
        if(arr[i] > arr[index]) 
        {
            swap(arr[i] , arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1, arr.end());
    return arr; 

    // time : O(3n) 
    // space : O(1)
    
}



// 8. Leaders in an array 
// brutte force 
void leader(vectoe<int> &arr) {
    int n = arr.size();
    for (int i=0 ; i<n ; i++){
        bool leader = true ;
        for (int j = i+1 ; j < n; j++)
        {
            if (arr[j] > arr[i]){
                leader = false ;
                break;
            }
        }
        if (leader == true) cout << i ;
        
    }
    // time : O(n2)
    // space : O(1)
}

// optimal 
vector<int> leaders(int n, int arr[]) {
    // Code here
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n-1 ; i>=0 ; i--){
       if (arr[i] >= maxi) {
            ans.emplace_back(arr[i]);
            maxi = arr[i];
       }
    }
    reverse(ans.begin() , ans.end());
    return ans ;
}


int main()
{
    twoSum();

    sortColors();

    majorElement();

    maxProfit();

    rearrangeArray();

    nextPermutation();

    leader();

    return 0;
}