#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; 
    cin >> a ; 

    if (  a > 90 ) {
        cout << "Excellent" << endl;
    } else if ( a > 80 ) {
        cout << "Good" <<endl ;
    } else if ( a > 70 ) {
        cout << "Fair" <<endl ;
    } else if ( a > 60 ) {
        cout << "Meets Expectations" <<endl ;
    } else { 
        cout << "Below Par" <<endl ;
    }
    return 0;
}