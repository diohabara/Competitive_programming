#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = {0, 1, 0, -1};
ll dy[4] = {1, 0, -1, 0};
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll s;
  cin >> s;

  ll x1, x2, x3, y1, y2, y3;
  x1 = y1 = 0;              // (x1, y1)は原点固定
  x2 = 1000000000, y2 = 1;  // (x2, y2)は(1, 1e9)固定
  /**
   * s/2 = (x2y3 - x3y2)/2 だから
   * x2 * y3 - x3 * y2 = sを満たす(x3, y3)を見つける
   */
  x3 = (x2 - s % x2) % x2;  // x3 = x2 * y3 - s
  y3 = (s + x3) / x2;
  printf("%lld %lld %lld %lld %lld %lld\n", x1, y1, x2, y2, x3, y3);
  return 0;
}