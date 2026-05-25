#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int X;
    cin >> X;

    long long ans = 0;

    for (int i = 0; i < N; i++)
    {

        int target = X - arr[i];

        for (int j = i + 1; j < N; j++)
        {

            int need2 = target - arr[j];

            map<int, int> freq;

            for (int k = j + 1; k < N; k++)
            {
                int need3 = need2 - arr[k];

                ans += freq[need3]; // How many previous numbers can pair with current arr[k] to make target?

                freq[arr[k]]++;
            }
        }
    }
}



// according to the questionn answer , upper one is for normal quadraplets 

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            for (int k = j + 1; k < n; k++) {

                for (int l = k + 1; l < n; l++) {

                    int value =
                        A[i]
                        - 2 * A[j]
                        + 3 * A[k]
                        - 4 * A[l];

                    if (value == x) {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}