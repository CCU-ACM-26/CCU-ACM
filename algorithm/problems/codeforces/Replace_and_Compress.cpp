#include <bits/stdc++.h>

using namespace std;

int main( ) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.length();
        s = ' ' + s;
        bool flag1 = false, flag2 = false;
        for (int i = 2; i < n; ++i) {
            if (s[i] == s[i - 1] && s[i] == s[i + 1]) flag1 = true;
            if (s[i] != s[i - 1] && s[i] != s[i + 1]) flag2 = true;
        }
        cout << 1 + flag1 + flag2 << '\n';
    }

    return 0;
}
