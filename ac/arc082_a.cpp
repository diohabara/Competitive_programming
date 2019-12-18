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
    vector<ll> cnt(100010);
    rep(i, N)
    {
        ll a;
        cin >> a;
        if (a==0) {
            cnt[a]++;
            cnt[a + 1]++;
        }else {
            cnt[a - 1]++;
            cnt[a]++;
            cnt[a + 1]++;
        }
    }

    ll ans = 0;
    for (auto &a : cnt) {
        ans = max(a, ans);
    }
    cout << ans << endl;
    return 0;
}