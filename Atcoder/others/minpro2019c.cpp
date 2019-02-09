#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll k, a, b;
    cin >> k >> a >> b;
    ll ans = 0;
    if (b - a > 2) {
        if (a <= k - 1) {
            if ((k - a + 1) % 2 == 0) {
                ans += b + (k - a - 1) / 2 * (b - a);
            } else {
                ans += b + ((k - a - 2) / 2) * (b - a) + 1;
            }
        } else {
            ans += k + 1;
        }
    } else {
        ans += k + 1;
    }
    cout << ans << endl;
    return 0;
}