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
    ll a[110];
    ll b[110];
    rep(i, N)
    {
        ll temp;
        cin >> temp;
        a[i] = temp;
    }
    rep(i, N)
    {
        ll temp;
        cin >> temp;
        b[i] = temp;
    }
    for (int i = 1; i < N; i++) {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }
    ll ans = a[0] + b[N - 1];
    for (int i = 1; i < N; i++) {
        ans = max(ans, a[i] + (b[N - 1] - b[i - 1]));
    }
    cout << ans << endl;
    return 0;
}