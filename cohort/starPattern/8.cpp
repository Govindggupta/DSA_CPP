#include <bits/stdc++.h>
using namespace std;

int main() {
    int a ; 
    cin >> a ;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = a-1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}