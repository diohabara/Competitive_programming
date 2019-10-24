#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, tmp;
    cin >> s;
    ll res = 0, depth = 0;
    for (auto& ch : s) {
        if (ch == '2') {
            depth++;
            res = max(res, depth);
        }
        if (ch == '5') {
            depth--;
            if (depth < 0) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    if (depth != 0) {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}