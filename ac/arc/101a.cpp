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
    ll N, K;
    cin >> N >> K;
    vector<ll> x(N);
    rep(i, N) { cin >> x[i]; }
    // full search
    ll ans = INF;
    rep(i, N - K+1)
    {
        ll l = x[i], r = x[i + K - 1];
        ans = min(ans, min(abs(l), abs(r)) + r - l);
    }
    cout << ans << endl;
    return 0;
}