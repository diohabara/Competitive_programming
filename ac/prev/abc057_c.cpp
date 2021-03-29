#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;

ll get_digit(ll m)
{
    ll idx = 0;

    while (m > 0) {
        m /= 10;
        idx++;
    }
    return idx;
}

int main()
{
    ll n;
    cin >> n;
    ll ans = get_digit(n);
    for (ll a = 1ll; a * a <= n; ++a) {
        if (n % a != 0) {
            continue;
        }
        const ll b = n / a;
        const ll cur = max(get_digit(a), get_digit(b));
        ans = min(ans, cur);
    }

    cout << ans << endl;
    return 0;
}