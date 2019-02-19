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
    int ans = 0;
    bool has9 = true;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != '9') {
            has9 = false;
        }
    }
        ans = s[0] - '1';
        ans += 9 * (s.size() - 1);
    if (has9 ) {
        cout << ans + 1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}