#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<ll> x(N);
    rep(i, N) { cin >> x[i]; }
    sort(x.rbegin(), x.rend());
    ll ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += x[i] * (N - 1 - 2*i);
    }
    cout << ans << endl;
    return 0;
}