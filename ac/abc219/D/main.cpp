#include <bits/stdc++.h>

#include <atcoder/all>
// #include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
// using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int N;
  cin >> N;
  int X, Y;
  cin >> X >> Y;
  vector<int> A(N + 1), B(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> A[i] >> B[i];
  }

  // solve
  /**
   * dp[n][y][x] := min number of bento
   * Takahashi has already decided on 1st, 2nd, ..., n-th bento
   * count of takoyaki = y
   * count of taiyaki = x
   * dp[n][y][x] == INF iff impossible to choose
   */
  vector<vector<vector<ll>>> dp(
      N + 1, vector<vector<ll>>(X + 1, vector<ll>(Y + 1, INF)));
  dp[0][0][0] = 0;
  for (int n = 1; n <= N; n++) {
    for (int x = 0; x <= X; x++) {
      for (int y = 0; y <= Y; y++) {
        // if Takahashi buys n-th bento, he gets A[n] takoyaki and B[n] taiyaki.
        // if the min number exceeds, just ignore the surplus
        dp[n][min(x + A[n], X)][min(y + B[n], Y)] =
            min(dp[n][min(x + A[n], X)][min(y + B[n], Y)], dp[n - 1][x][y] + 1);
        dp[n][x][y] = min(dp[n][x][y], dp[n - 1][x][y]);
      }
    }
  }
  if (dp[N][X][Y] == INF) {
    cout << -1 << endl;
  } else {
    cout << dp[N][X][Y] << endl;
  }
}
