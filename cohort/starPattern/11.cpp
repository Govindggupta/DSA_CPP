#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        if ( i == 1 ) {
            for (int j = 0; j <= a - i ; j++)
            {
                cout << "* ";
            }
        }
        else if (i == a) {
            cout << "*";
        }

        else {
            cout << "*";
            for (int j = 1; j <= a - i - 1; j++)
            {
                cout << "  ";
            }
            cout << " *";
            
        }
        cout << endl;
        
    }

    return 0;
}