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
    ll N, M;
    cin >> N >> M;
    vector<ll> edge[N];
    rep(_, M)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        a--,b--;
        // ある頂点から伸びる辺の長さを格納している
        edge[a].push_back(l);
        edge[b].push_back(l);
    }
    ll ans = 0;
    rep(i, N)
    {
        // 
        map<ll, ll> mp;
        for (auto vrtx : edge[i]) {
            // 頂点がもしインクリメントされていたら,足して2540になるから答え
            ans += mp[2540 - vrtx];
            // 頂点のインクリメントする
            mp[vrtx]++;
        }
    }
    cout << ans << endl;
    return 0;
}