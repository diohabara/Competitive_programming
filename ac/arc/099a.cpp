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
    ll n, k;
    cin >> n >> k;
    // n-1個の要素を長さk-1のタイル（？）で覆う
    ll ans = (n - 1 + (k - 2)) / (k - 1);
    cout << ans << endl;
    return 0;
}