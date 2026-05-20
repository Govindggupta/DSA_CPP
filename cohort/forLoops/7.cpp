#include <bits/stdc++.h>
using namespace std;

int main() {
    int a ; 
    cin >> a; 

    long long sum = 0 ; 
    for (int i = 1; i <= a; i++)
    {
        sum += i ;
    }
    cout << sum << endl;
    return 0;
}