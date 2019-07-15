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
    ll F[100][14];
    ll P[100][15];
    rep(i, N)
    {
        rep(j, 10)
        {
            cin >> F[i][j];
        }
    }
    rep(i, N)
    {
        rep(j, 11)
        {
            cin >> P[i][j];
        }
    }
    ll res = -(1 << 30);
    for (int bit = 1; bit < (1 << 10); ++bit) {
        ll x = 0;
        rep(i, N)
        {
            ll cnt = 0;
            rep(j, 10)
            {
                if ((bit >> j & 1) && F[i][j]) {
                    cnt++;
                }
            }
            x += P[i][cnt];
        }
        res = max(res, x);
    }
    cout << res << endl;
    return 0;
}