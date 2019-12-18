#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    ll ans = -INF;
    for (int i = 0; i < n; i++) { // takahashiの選ぶ値
        ll aoki_pos, aoki_v = -INF, tmp_ans = -INF; // 最高得点のときのaokiのposition, aokiの最高得点，暫定的最高得点
        for (int j = 0; j < n; j++) { // aokiの選ぶ値
          if ( i == j )
              continue;
          ll cnt = 0, taka = 0, aoki = 0; // 位置，takahashiの得点，aokiの得点
          int l = min(i, j);
          int r = max(i, j);
          for (int k = l; k <= r; k++) {
              if (cnt % 2 == 0) {
                  taka += a[k];
              } else {
                  aoki += a[k];
              }
              cnt++;
            }
            // aokiが最高得点を取れるか
            if (aoki > aoki_v) {
                aoki_pos = j; // 次はここまでスキップ
                aoki_v = aoki; // 最高得点を更新
                tmp_ans = taka; // aokiが最高得点のとき，takahashiの得点を更新
            }
        }
        ans = max(ans, tmp_ans);
    }
    cout << ans << endl;
    return 0;
}
