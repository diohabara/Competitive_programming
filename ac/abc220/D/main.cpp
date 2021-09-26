#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 998244353;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
    A[i] %= 10;
  }

  // solve
  // dp[A[i]][j] := A[i]まで操作に関わったときに先頭がjである確率
  vector<vector<ll>> dp(N, vector<ll>(10, 0));
  dp[0][A[0]] = 1;
  for (int i = 1; i < N; i++) {
    rep(j, 10) {
      dp[i][(j + A[i]) % 10] += dp[i - 1][j];
      dp[i][(j * A[i]) % 10] += dp[i - 1][j];
    }
  }
  rep(i, 10) { cout << dp[N - 1][i] << endl; }
}
