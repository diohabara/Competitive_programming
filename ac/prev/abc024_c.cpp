#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll n, d, k;
  cin >> n >> d >> k;
  pair<ll, ll> lr[12345];
  bool goRight[12345]; // 右側に行くかどうか
  pair<ll, ll> st[123]; // 民族iのstartとto
  ll day[123]; // 民族iが目的地にたどり着くまでの日数
  rep(i, d) {
    cin >> lr[i].first >> lr[i].second;
  }
  rep(i, k) {
    cin >> st[i].first >> st[i].second;
    if (st[i].first < st[i].second) {
      goRight[i] = true;
    } else {
      goRight[i] = false;
    }
    day[i] = -1;
  }

  rep(i, d) { // i日目の移動
    rep(j, k) {
      // sがl以上r以下なら実行
      if (lr[i].first <= st[j].first && st[j].first <= lr[i].second){
        if (goRight[j]) { // 右側に行くとき
          st[j].first = max(st[j].first, lr[i].second);
          // 右側以上に行けるとき
          if (day[j] == -1 && st[j].first >= st[j].second) {
            day[j] = i + 1;
          }
        } else { // 左側に行くとき
          st[j].first = min(st[j].first, lr[i].first);
          // 左側以上に行けるとき
          if (day[j] == -1 && st[j].first <= st[j].second) {
            day[j] = i + 1;
          }
        }
      }
    }
  }
              
  rep(i, k) {
    cout << day[i] << endl;
  }
    
  return 0;
}
