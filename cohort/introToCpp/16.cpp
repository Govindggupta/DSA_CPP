#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a , b , c; 
    cin >> a >> b >> c;

    cout << "Min = " << min(a,min(b,c)) << endl;
    cout << "Max = " << max(a,max(b,c)) << endl;
    return 0;
}