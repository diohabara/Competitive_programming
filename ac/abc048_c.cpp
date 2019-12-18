#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int main()
{
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    vector<ll> a(n);
    vector<ll> b(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        ll tmp = max(0ll, a[i + 1] + a[i] - x), rem = min(tmp, a[i + 1]);
        ans += tmp;
        a[i + 1] -= rem;
        a[i] -= tmp - rem;
    }
    cout << ans << endl;
    return 0;
}