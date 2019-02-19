#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n = s.size();
    if (n < 26) {
        char c;
        for (c = 'a'; c <= 'z'; c++) {
            if (s.find(c) == string::npos) {
                break;
            }
        }
        s += c;
        cout << s << endl;
        return 0;
    } else {
        if (s == "zyxwvutsrqponmlkjihgfedcba") {
            cout << -1 << endl;
            return 0;
        } else {
            string t = s, ans;
            next_permutation(s.begin(), s.end());
            for (int i = 0; i < n; i++) {
                ans += s[i];
                if (t[i] != s[i]) {
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}