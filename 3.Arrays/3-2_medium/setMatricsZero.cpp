#include <bits/stdc++.h>
using namespace std;



// 10 . set matrics zero 
// brutte force 
void markRow(int i){
    for (int i = 0; i < n; i++)
    {
        if (arr[i][j] ==0 ) arr = -1 ;
    } 
}
void markCol(int j){
    for (int j = 0; j < m; i++)
    {
        if (arr[i][j] ==0 ) arr = -1 ;
    } 
}
void setMatricsZero(vector<vector<int>> &arr , int n , int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0) {
                markRow(i);
                markCol(j);
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == -1) arr[i][j] = 0 ;
        }
    }
    
    // time : (n*m) * (n+m) + (n*m)
}

// better 
void setMatricsZero(vector<vector<int>> &arr , int n , int m)  
{
    int col[m] = {0} ;
    int row[n] = {0} ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0 ) {
                col[j] = 1 ;
                row[i] = 1 ;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            if (col[j] || row[i]) arr[i][j] = 0 ;
        }
        
    }
    // time : (2*n*m)
    // space : (m) + (n)
}

// optimal 
void setZeroes(vector<vector<int>>& arr) {
    int n = arr.size(); // Number of rows
    int m = arr[0].size(); // Number of columns
    int col0 = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                arr[i][0] = 0;
                if (j != 0) 
                    arr[0][j] = 0;
                else 
                    col0 = 0;
            }
        }
    }

    for (int i = 1; i < n; i++) { // Start from 1 to avoid the first row
        for (int j = 1; j < m; j++) {
            if (arr[i][j] != 0) {
                if (arr[0][j] == 0 || arr[i][0] == 0) {
                    arr[i][j] = 0;
                }
            }
        }
    }

    if (arr[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            arr[0][j] = 0;
        }
    }

    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            arr[i][0] = 0;
        }
    }
}

int main() {
    
    setZeroes();

    return 0;
}