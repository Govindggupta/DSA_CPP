#include <bits/stdc++.h>
using namespace std;

// 8. linear Search
int linearSearch(vector<int> &arr, int num)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}


// 9. find the union and intersection in two sorted array
// union :
// brutte force approach is using map or set
// optimal
vector<int> Union(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.emplace_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.emplace_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.emplace_back(a[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.emplace_back(b[j]);
        }
        j++;
    }

    return unionArr;

    // time : O(n1 + n2)
    // space : O(n1 +n2)
}

// Intersection :
// brutte force
vector<int> Intersection(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();

    vector<int> ans;
    int vis[n2] = {0};

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                ans.emplace_back(a[i]);
                vis[j] = 1;
                break;
            }
        }
    }
    return ans;

    // time : n1*n2
    // space :  n2
}

// optimal
vector<int> Intersection(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.emplace_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;

    // time: O(n1+n2)
    // space: O(1)
}



// 10. find the missing number
// brutte force
int missingNum(vector<int> &arr, int N, int n)
{
    for (int i = 0; i < N; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == N)
            {
                flag = 1;
            }
        }
        if (flag == 0)
            return i;

        // time : O(N*N)
        // space : O(1)
    }
}

// better
int missingNum(vector<int> &arr, int N, int n)
{
    int hash[N + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= N; i++)
    {
        if (hash[i] == 0)
            return i;
    }

    // time : O(2N)
    // space : O(N)
}

// optimal
int missingNum(vector<int> &arr, int N, int n)
{
    int Sum = N * (N + 1);
    int sl = 0;
    for (int i = 0; i < n; i++)
    {
        sl = sl + arr[i];
    }
    return Sum - sl;

    // time : O(N)
    // space : O(1)
}
// optimal.2 (XOR)
int missingNum(vector<int> &arr, int N)
{
    int n = N - 1;
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1) :
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;

    // time : O(N)
    // space : O(1)
}



// 11. maximum consicutive 1's
int consicutive(vector<int> &arr , int n){

    int count = 0 ;
    int maxi = 0 ;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1){
            count++;
            maxi = max(maxi , count);
        }
        else{
            count = 0;
        }
    }
    return maxi;

    // time : O(n)
}



// 12. Find the number that apper once and other number twice 
// butte force : linear Search
// time : O(n^2)
// space : O(1)

// better : Hashing
// hash array will be size of maxi+1 in the array 
// hashing with map is even better than using hashing using array 

// optimal 
int getSingleElement(vector<int> &arr){
    int xor = 0 ;
    for (int i = 0; i < arr.size(); i++)
    {
        xor = xor ^ arr[i];
    }
    return xor ;
    
}



int main()
{

    linearSearch();

    Union();
    Intersection();

    missingNum();

    consicutive();

    getSingleElement();

    return 0;
}