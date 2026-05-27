#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ans;
    getline(cin, s);
    ans.reserve(s.size());

    for (char c : s) {
        if (c != ' ') ans.push_back(c);
    }

    cout << ans;
    return 0;
}