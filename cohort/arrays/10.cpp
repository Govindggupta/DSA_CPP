#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr_n[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr_n[i];
        }

        int m;
        cin >> m;

        int arr_m[m];

        for (int i = 0; i < m; i++)
        {
            cin >> arr_m[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr_n[i] == arr_m[j])
                {
                    cout << arr_n[i] << " ";

                    arr_m[j] = -1; // mark as used
                    break;
                }
            }
        }

        cout << endl;
    }

    return 0;
}