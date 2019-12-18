#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// 行列にあるアメの数
vector<ll> cnt_r;
vector<ll> cnt_c;
// アメがある座標の情報
vector<ll> r;
vector<ll> c;
// アメがi個ある行列の数
vector<ll> x;
vector<ll> y;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll R, C, k, n;
    cin >> R >> C >> k >> n;
    r.resize(n);
    c.resize(n);
    cnt_r.resize(R);
    cnt_c.resize(C);
    x.resize(n);
    y.resize(n);
    rep(i, n) {
      // アメのある座標を入れて，その行列のアメの数をインクリメントする
      cin >> r[i] >> c[i];
      r[i]--, c[i]--;
      cnt_r[r[i]]++;
      cnt_c[c[i]]++;
    }
    // 
    rep(i, R) {
      x[cnt_r[i]]++;
    }
    rep(i, C) {
      y[cnt_c[i]]++;
    }
    
    ll ans = 0;
    // 行と列のアメの数がkとなる場合を加える
    for (int i = 0; i <= k; i++) {
      ll j = k - i;
      ans += x[i] * y[j];
    }

    // アメのある座標で，行列のアメの数の和がk個になる
    rep(i, n) {
      if (cnt_r[r[i]] + cnt_c[c[i]] == k) {
        ans--;
      }
    }

    // アメのある座標で行列のアメの数の和がk+1個になる
    rep(i, n) {
      if (cnt_r[r[i]] + cnt_c[c[i]] == k + 1) {
        ans++;
      }
    }

    cout << ans << endl;
    return 0;
}
