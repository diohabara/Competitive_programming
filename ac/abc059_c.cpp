#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) { cin >> a[i]; }
    ll ans = INF;
    rep(i, 2)
    {
        ll sum = 0;
        ll cnt = 0;
        rep(j, n) {
            sum += a[j];
            if (j % 2 == i && sum <= 0) { // make sum plus
                cnt += 1 - sum;
                sum = 1;
            } else if (j % 2 == 1 - i && sum >= 0) { // make sum minus
                cnt += 1 + sum;
                sum = -1;
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}