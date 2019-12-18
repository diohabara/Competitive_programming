#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ALL(a) (a).begin(), (a).end()
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
    ll N, K;
    cin >> N >> K;
    vector<ll> V(N);
    rep(i, N) { cin >> V[i]; }

    // 実装
    ll ans = 0;
    for (ll l = 0; l <= min(N, K); ++l) { // 右側から取り出す-
        for (ll r = 0; r + l <= min(N, K); ++r) { // 左側から取り出す
            vector<ll> temochi = V;
            temochi.erase(temochi.begin() + l, temochi.end() - r); // 取っていない要素を削る
            sort(ALL(temochi));
            if (K - (l + r) < 0) { // 宝石の操作の限界を超えたらスキップ
                continue;
            }
            ll temp_ans = accumulate(ALL(temochi), 0);
            ll suteru = min(K - (l + r), (ll)temochi.size()); // 捨てる回数
            rep(s, suteru)
            {
                if (temochi[s] < 0) {
                    temp_ans -= temochi[s];
                }
            }
            ans = max(ans, temp_ans);
        }
    }
    cout << ans << endl;
    return 0;
}