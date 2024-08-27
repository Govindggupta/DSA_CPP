#include <bits/stdc++.h>
using namespace std;

// 9. Longest Consecutive Sequence 
// brutte force
bool linearSeach(vector<int> &arr , num) {
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num) {
            return true;
        }
        return false ;
    }
    
}
int longestSuccesseveElement(vector<int> &arr) {
    int longest = 1 ;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i] ;
        int cnt = 1 ;

        while (linearSeach(arr , x+1) == true)
        {
            x = x+1;
            cnt += 1;
        }
        
        longest = max(longest , cnt);
    }
    return longest ;

    // time : O(n2)
}

// better 
int longestSuccesseveElement(vector<int> &arr) {
    if (arr.size() == 0) return 0;
    sort(arr.begin() , arr.end());
    int n = nums.size() ;
    int lastSmaller = INT_MIN ;
    int cnt = 0 ; 
    int longest = 1 ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]-1 == lastSmaller) {
            cnt += 1 ;
            lastSmaller = arr[i] ;
        }
        else if (arr[i] != lastSmaller) {
            cnt = 1 ;
            lastSmaller = arr[i] ;
        }
        longest = max(longest , cnt);
    }
    return longest ;

    // time : O(n)
}

// optimal 
int longestSuccesseveElement(vector<int> &arr) {
    int n = arr.size() ; 
    if (n == 0 ) return 0 ;
    int longest = 1 ;
    unordered_set<int> st ; 
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for(auto it : st)
    {
        if (st.find(it-1) == st.end()) {
            int cnt = 1 ; 
            int x = it ; 
            while (st.find(x+1) != st.end()){
                x = x +1 ;
                cnt = cnt +1 ;
            }
            longest = max(longest , cnt );
        }
    }
    
    return longest ;    
}


int main() {
    
    longestSuccesseveElement() ;

    return 0;
}