#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
ll n, m;
ll d[310][310];
vector<ll> l;

// 最短距離を求める
void warshall_floyd() {
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
      }
    }
  }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    // input 
    for (int i = 0; i < 310; i++) {
      for (int j = 0; j < 310; j++) {
        d[i][j] = INF;
      }
    }
    for (int i = 0; i < 310; i++) {
      d[i][i] = 0;
    }
    vector<pair<ll, ll> > tonari; // 隣接している頂点
    for (int i = 0; i < m; i++) {
      ll tu, tv, tl;
      cin >> tu >> tv >> tl;
      tu--, tv--;
      // 0と隣接する頂点の道はtonariに入れる
      if (tu == 0) {
        tonari.push_back(make_pair(tv, tl));
        continue;
      } else if (tv == 0){
        tonari.push_back(make_pair(tu, tl));
        continue;
      }
      // すべての道をdに入れる
      d[tu][tv] = d[tv][tu] = tl;
    }
    // すべての道で最短距離を求める
    warshall_floyd();
    // 答えの初期化
    ll ans = INF;
    // 隣接している頂点同士を調べる
    for (auto u : tonari) {
      for (auto v : tonari) {
        // 同じ時はスキップ
        if (u.first == v.first) {
          continue;
        }
        // 違うとき
        // 0から片方 + 片方からもう片方 + もう片方から0
        ll l = u.second + d[u.first][v.first] + v.second;
        ans = min(ans, l);
      }
    }
    if (ans == INF) {
      cout << -1 << endl;
    } else {
      cout << ans << endl;
    }
    return 0;
}
