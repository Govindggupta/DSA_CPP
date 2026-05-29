#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m ; 

    cin >> n >> m ; 

    vector<int> a(n) , b(m) ;

    for (int i = 0; i < n; i++) {
        cin >> a[i] ;
    }
    for (int i = 0; i < m; i++) {       
        cin >> b[i] ;
    }

    vector <int> c ; 

    int i = 0 , j = 0 ;

    while (i < n && j < m) {
        if (a[i] < b [j]) {
            c.push_back(a[i]) ;
            i++ ;
        }
        else {
            c.push_back(b[j]) ;
            j++ ;
        } 
    }

    while (i < n) {
        c.push_back(a[i]) ;
        i++ ;
    }

    while (j < m) {
        c.push_back(b[j]) ;
        j++ ;
    }

    for (int k = 0; k < c.size(); k++) {
        cout << c[k] << " " ;
    }

    
    return 0;
}