#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    ll n;
    cin >> n;
    vector<ll> a(n + 1), b(n);
    ll sum = 0; // Aの合計
    rep(i, n + 1)
    {
        cin >> a[i];
        sum += a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    // output
    ll sub = 0;
    // Aからできるだけ引く
    for (int i = 0; i < n; i++) {
        if (a[i] - b[i] < 0) {
            b[i] -= a[i];
            a[i] = 0;
            if (a[i + 1] - b[i] < 0) {
                b[i] -= a[i + 1];
                a[i + 1] = 0;
            } else {
                a[i + 1] -= b[i];
                b[i] = 0;
            }
        } else {
            a[i] -= b[i];
            b[i] = 0;
        }
    }
    rep(i, n+1) {
        sub += a[i];
    }
    cout << sum - sub << endl;
    return 0;
}