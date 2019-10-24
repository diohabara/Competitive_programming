#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1ll << LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;
    ll ans = 1;
    vector<ll> div;
    // Mの約数を求める
    for (ll d = 1; d * d <= M; ++d) {
        if (M % d == 0) {
            div.push_back(d);
            ll d2 = M / d;
            if (d2 != d) {
                div.push_back(d2);
            }
        }
    }
    sort(div.begin(), div.end());

    // Mの約数のうちM/N以下のもので最大のものを求める
    for (auto& d : div) {
        if (d * N <= M) {
            ans = max(d, ans);
        }
    }
    cout << ans << endl;

    return 0;
}