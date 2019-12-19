#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll N, W;
ll w1;
vector<ll> st[4]; // st[w]...vector<ll> val : wごとにvalueのvectorが繋がっている

signed main()
{
    cin >> N >> W;
    rep(i, N)
    {
        ll w, v;
        cin >> w >> v;
        if (i == 0) {
            w1 = w;
        }
        st[w - w1].push_back(v);
    }
    rep(i, 4)
    {
        // st = (0, biggest,..., smallest)
        sort(st[i].begin(), st[i].end());
        st[i].push_back(0);
        reverse(st[i].begin(), st[i].end());
        for (ll j = 1; j < st[i].size(); ++j) {
            st[i][j] += st[i][j - 1]; // wごとに累積和を取る
        }
    }
    ll res = 0;
    rep(i, st[0].size())
    {
        rep(j, st[1].size())
        {
            rep(k, st[2].size())
            {
                rep(l, st[3].size())
                {

                    ll fact = w1 * i + (w1 + 1) * j + (w1 + 2) * k + (w1 + 3) * l;
                    if (fact <= W) {
                        res = max(res, st[0][i] + st[1][j] + st[2][k] + st[3][l]);
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}