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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> w(n), e(n);
    rep(i, n)
    {
        if (s[i] == 'E') {
            e[i]++;
        } else {
            w[i]++;
        }
    }
    for (int i = 1; i < n; ++i) {
        w[i] += w[i - 1];
        e[i] += e[i - 1];
    }
    ll val = n;
    rep(i, n)
    {
        if (i == 0) {
            val = min(val, e[n - 1] - e[0]);
        } else if (i == n - 1) {
            val = min(val, w[n - 2]);
        } else {
            val = min(val, w[i - 1] + (e[n - 1] - e[i]));
        }
    }
    cout << val << endl;
    return 0;
}