#include <bits/stdc++.h>
using namespace std;

int main() {
    int a ; 
    cin >> a ; 

    for (int i = 1; i <= a; i++)
    {
        for (int j = a - i ; j > 0 ; j--)
        {
            cout << "#";
        }
        for (int j = i; j > 0 ; j--)
        { 
            if ( j == i ) {
                cout << "*";
            } else {
            cout << " *";
            }
        }
        cout << endl;
    }
    
    
    return 0;
}