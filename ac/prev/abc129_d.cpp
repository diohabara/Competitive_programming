#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
ll l[2010][2010], r[2010][2010], u[2010][2010], d[2010][2010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H) { cin >> S[i]; }

    rep(h, H)
    {
        ll t = 0;
        rep(w, W)
        {
            if (S[h][w] == '.') {
                t++;
            } else {
                t = 0;
            }
            l[h][w] = t;
        }
    }
    rep(h, H)
    {
        ll t = 0;
        for (int w = W - 1; w >= 0; --w) {
            if (S[h][w] == '.') {
                t++;
            } else {
                t = 0;
            }
            r[h][w] = t;
        }
    }
    rep(w, W)
    {
        ll t = 0;
        rep(h, H)
        {
            if (S[h][w] == '.') {
                t++;
            } else {
                t = 0;
            }
            u[h][w] = t;
        }
    }
    rep(w, W)
    {
        ll t = 0;
        for (int h = H - 1; h >= 0; --h) {
            if (S[h][w] == '.') {
                t++;
            } else {
                t = 0;
            }
            d[h][w] = t;
        }
    }
    ll ans = 0;
    rep(h, H)
    {
        rep(w, W)
        {
            if (S[h][w] == '.') {
                ans = max(ans, l[h][w] + r[h][w] + u[h][w] + d[h][w] - 3);
            }
        }
    }
    cout << ans << endl;
    return 0;
}