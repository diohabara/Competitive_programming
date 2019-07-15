#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    ll k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        if (s[i] != '1') {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}