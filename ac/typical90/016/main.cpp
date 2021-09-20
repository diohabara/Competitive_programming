#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll N, A, B, C;
  cin >> N;
  cin >> A >> B >> C;

  // solve
  ll ans = INF;
  rep(i, 10000) {
    rep(j, 10000 - i) {
      ll rem = N - A * i - B * j;
      if (rem % C != 0 || rem < 0) {
        continue;
      }
      ll cnt = i + j + rem / C;
      if (9999 < cnt) {
        continue;
      }
      ans = min(ans, cnt);
    }
  }
  cout << ans << endl;
}
