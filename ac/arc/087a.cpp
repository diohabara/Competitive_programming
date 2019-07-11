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
    vector<ll> a(N);
    rep(i, N) { cin >> a[i]; }
    map<ll, ll> mp;
    rep(i, N) { mp[a[i]]++; }
    ll ans = 0;
    for (auto p : mp) {
        ll x = p.first;
        ll n = p.second;
        if (n < x) {
            ans += n;
        } else {
            ans += n - x;
        }
    }
    cout << ans << endl;
    return 0;
}