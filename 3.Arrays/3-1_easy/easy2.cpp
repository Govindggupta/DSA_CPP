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
            if(a[i] == b[j] && vis[j] == 0) {
                ans.emplace_back(a[i]);
                vis[j] = 1;
                break ;
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
    int i=0 ;
    int j=0 ;
    vector<int> ans;

    while (i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.emplace_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;

    // time: O(n1+n2)
    // space: O(1)
    
}


int main()
{

    linearSearch();
    
    Union();
    Intersection();

    return 0;
}