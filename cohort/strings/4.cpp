#include <bits/stdc++.h>
using namespace std;

int main() {

    char c;
    cin >> c;  

    if (c >= 'a' && c <= 'z') {
        cout << c;
    }else {
        cout << char(c+32);
    }

    return 0;
}