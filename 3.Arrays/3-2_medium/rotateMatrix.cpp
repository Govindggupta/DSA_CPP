#include <bits/stdc++.h>
using namespace std;

// 11. Rotate Matrix
// brutte force 
vector<vector<int>> rotateMatrics(vector<vector<int>> &arr , int n , int m) {
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][n-1-i] = arr[i][j]; 
        }
        
    }
    return ans ;
    // time : (n2)
    // space : (n2)
}

// better 
void rotateMatrix(vector<vector<int>> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }

    // time : O(n^2)
}



// 12. Print the matrix in spiral manner
vector<int> spiralOrder(vector<vector<int>>& arr) {
    vector<int> ans;
    int n = arr.size();
    if (n == 0) return ans; // Handle empty input
    int m = arr[0].size();  // Correctly get the number of columns

    int top = 0;
    int bottom = n - 1;
    int right = m - 1;
    int left = 0;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; i++) {
            ans.emplace_back(arr[top][i]);
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.emplace_back(arr[i][right]);
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.emplace_back(arr[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.emplace_back(arr[i][left]);
            }
            left++;
        }
    }

    return ans;
}



int main() {
    rotateMatrics();
    return 0;
}