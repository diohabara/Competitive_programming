#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

ll N, Ma, Mb;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> Ma >> Mb;
    vector<ll> a(N), b(N), c(N);
    rep(i, N) { cin >> a[i] >> b[i] >> c[i]; }
    ll minv = INF;
    for (int bit = 0; bit < (1 << N); ++bit) {
        ll suma = 0, sumb = 0, sumc = 0;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                suma += a[i];
                sumb += b[i];
                sumc += c[i];
            }
        }
        if (suma * Mb == sumb * Ma && suma != 0 && sumb != 0) {
            minv = min(minv, sumc);
        }
    }
    if (minv != INF) {
        cout << minv << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}