#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n ; ++i)
const ll INF = 1e9;
const ll MOD = 1e9+7;
int main()
{
    ll N, T;
    cin >> N >> T;
    vector<ll> t(N);
    rep(i, N) { cin >> t[i]; }

    ll x = T;
    rep(i, N - 1) {
        x += min(t[i + 1] - t[i], T);
    }
    cout << x << endl;
    return 0;
}