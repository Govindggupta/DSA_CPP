#include <bits/stdc++.h>
using namespace std;

void factors(int a) {
    for (int i = 1; i <= a; i++ ) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }
}

void RevFactors(int a) {
    for (int i = a; i > 0; i--)
    {
        if (a % i == 0) {
            cout << i << " ";
        }
    }
    
}

int main() {
    int a ; 
    cin >> a ;
    
    RevFactors(a);
    return 0;
}