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
  int N;
  cin >> N;
  string S;
  cin >> S;

  // solve
  // dp[pos][i] := pos-th string has up to the i-th character of "atcoder"
  vector<vector<ll>> dp(N + 1, vector<ll>(8));
  dp[0][0] = 1;
  string atcoder = "atcoder_";
  rep(i, N) {
    rep(j, atcoder.size()) {
      dp[i + 1][j] += dp[i][j];
      if (S[i] == atcoder[j]) {
        dp[i + 1][j + 1] += dp[i][j];
      }
    }
    rep(j, atcoder.size()) { dp[i + 1][j] %= MOD; }
  }
  cout << dp[N][7] << endl;
}
