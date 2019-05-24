#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = (ll)1e9 + 7;
const ll HIGHINF = (ll)1e18;

int main()
{
    ll n, h;
    cin >> n >> h;
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    ll ans = HIGHINF;
    for (ll i = 0; i <= n; i++) {
        ll j = (n - i) * e - h - b * i;
        if (j >= 0)
            j = j / (d + e) + 1;
        else
            j = 0;
        ans = min(ans, a * i + c * j);
    }
    cout << ans << endl;
    return 0;
}
