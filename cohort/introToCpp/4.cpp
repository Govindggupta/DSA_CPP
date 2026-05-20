#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0;
    for (int i = 5; i > 0; i--)
    {
        if (i == 5 || i == 1)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "*";
            }
            cout << endl;
            continue;
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}