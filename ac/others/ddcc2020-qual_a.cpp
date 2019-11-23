#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

ll money(ll x)
{
    if (x == 3) {
        return 100000;
    } else if (x == 2) {
        return 200000;
    } else if (x == 1) {
        return 300000;
    } else {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    if (x == 1 && y == 1) {
        ans += 400000;
    }
    cout << ans + money(x) + money(y) << endl;
    return 0;
}