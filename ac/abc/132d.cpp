#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };

const int MOD = 1000000007;

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

vector<vector<ll>> pas;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, K;
    cin >> N >> K;
    COMinit();
    for (int i = 1; i <= K; ++i) {
        cout << COM(N - K + 1, i) * COM(K - 1, i - 1) % MOD << endl;
    }
    return 0;
}