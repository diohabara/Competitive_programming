#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<ll> L(N);
    rep(i, N) { cin >> L[i]; }
    sort(L.begin(), L.end());

    ll ans = 0;

    // aとbを固定
    rep(i, N)
    {
        for (ll j = i + 1; j < N; j++) {
            // c > a+bなので,c = L[k]となる添字を求める
            auto k = lower_bound(L.begin(), L.end(), L[i] + L[j]) - L.begin();
            // c の動ける範囲は[j+1, k)
            ans += max(k - (j + 1), 0ll);
        }
    }
    cout << ans << endl;
    return 0;
}