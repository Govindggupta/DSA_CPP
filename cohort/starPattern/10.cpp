#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = a - i; j > 0; j--)
        {
            cout << " ";
        }

        if (i == 1)
        {
            cout << "*";
        }

        else if (i == a)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "*";

            for (int j = 1; j <= (2 * i - 3); j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}