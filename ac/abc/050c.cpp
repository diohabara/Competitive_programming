#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) { cin >> a[i]; }
    sort(a.begin(), a.end());

    if (n % 2 == 0) {
        ll even_n = 1;
        for (int i = 0; i < n / 2; i++) {
            if (a[2 * i] != even_n || a[2 * i + 1] != even_n) {
                cout << 0 << endl;
                return 0;
            }
            even_n += 2;
        }
    } else {
        if (a[0] != 0) {
            cout << 0 << endl;
            return 0;
        }
        ll odd_n = 2;
        for (int i = 1; i <= n / 2; i ++) {
            if (a[2 * i - 1] != odd_n || a[2 * i] != odd_n) {
                cout << 0 << endl;
                return 0;
            }
            odd_n += 2;
        }
    }
    ll ans = 1;
    for (int i = 0; i < n / 2; i++) {
        ans *= 2;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}