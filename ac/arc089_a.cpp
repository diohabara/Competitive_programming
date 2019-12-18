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
    ll N;
    cin >> N;
    ll cur_t = 0, cur_x = 0, cur_y = 0;
    ll t, x, y;
    rep(i, N)
    {
        cin >> t >> x >> y;
        ll dis = abs(cur_x - x) + abs(cur_y - y);
        if (dis > abs(cur_t - t) || dis % 2 != abs(cur_t - t) % 2) {
            puts("No");
            return 0;
        }
        cur_t = t;
        cur_x = x;
        cur_y = y;
    }
    puts("Yes");
    return 0;
}