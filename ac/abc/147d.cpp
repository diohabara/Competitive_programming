#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A[i];
    }
    ll ans = 0;
    for (int bit = 0; bit < 60; ++bit) {
        ll x0 = 0;
        ll x1 = 0;
        for (int i = 0; i < N; ++i) {
            // bit桁目を取り出す
            ll x = (A[i] >> bit) & 1;
            // bit桁目が0, 1どちらかを数える
            if (x == 0) {
                ++x0;
            } else {
                ++x1;
            }
        }
        // 指数
        ll p = 1;
        for (int i = 0; i < bit; ++i) {
            p *= 2;
            p %= MOD;
        }
        // x0*x1が0, 1の組み合わせの数
        ll cnt = (x0 * x1) % MOD;
        ans += cnt * p;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}