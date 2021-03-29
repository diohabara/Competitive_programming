
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> s(M);
    rep(i, M)
    {
        ll k;
        cin >> k;
        rep(j, k)
        {
            ll a;
            cin >> a;
            --a;
            s[i].push_back(a);
        }
    }
    vector<ll> p(M);
    rep(i, M) { cin >> p[i]; }

    ll ans = 0;
    for (int bit = 0; bit < (1 << N); ++bit) { // スイッチの組み合わせに関してbit全探索する
        bool ok = true; // すべてが点灯する
        rep(i, M)
        {
            int cnt = 0; // onになっているスイッチの個数
            for (auto v : s[i]) { // i番目に関してすべてのスイッチを探索する
                if (bit & (1 << v)) { // bitANDでonおときはcnt++
                    cnt++;
                }
            }
            if (cnt % 2 != p[i]) { // もしひとつでもp[i]と違っていればokじゃない
                ok = false;
            }
        }
        if (ok) { // もしすべて点灯するならans++(これをスイッチのすべての組み合わせに関して行う)
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}