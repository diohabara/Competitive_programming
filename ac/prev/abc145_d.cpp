#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll X, Y;
ll dpx[1234566], dpy[1234567];

// Combination
const ll COMB_MAX = 1e6;
ll fac[COMB_MAX], finv[COMB_MAX], inv[COMB_MAX];
void COMinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < COMB_MAX; i++) {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
ll COM(ll n, ll k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> X >> Y;
    if ((X + Y) % 3 == 0) {
        ll n = (2 * Y - X) / 3;
        ll m = (2 * X - Y) / 3;
        if (n < 0 || m < 0) {
            cout << 0 << endl;
            return 0;
        } else {
            COMinit();
            cout << COM(n + m, n) << endl;
        }
    } else {
        cout << 0 << endl;
    }
    return 0;
}