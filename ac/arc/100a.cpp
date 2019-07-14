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
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    rep(i, n)
    {
        cin >> a[i];
        b[i] = a[i] - i;
    }
    sort(b.begin(), b.end());
    ll mean;
    mean = b[n / 2];
    ll ans = 0;
    rep(i, n)
    {
        ans += abs(b[i] - mean);
    }
    cout << ans << endl;
    return 0;
}