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
    ll b1 = 0, b2 = 0, b4 = 0;
    rep(i, N)
    {
        cin >> a[i];
        if (a[i] % 4 == 0) {
            b4++;
        } else if (a[i] % 2 == 0) {
            b2++;
        } else {
            b1++;
        }
    }
    if (b2 == 0) {
        if (b1 <= b4 + 1) {
            puts("Yes");
            return 0;
        }
    } else {
        if (b1 <= b4) {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}