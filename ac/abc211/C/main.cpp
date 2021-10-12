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
  string S;
  cin >> S;

  // solve
  string t = "chokudai";
  vector<vector<ll>> dp(
      S.size() + 1,
      vector<ll>(t.size() + 1)); /* dp[i][j] := until i-th character,
                                            you have j length of chokudai */
  rep(i, S.size() + 1) dp[i][0] = 1;

  for (int i = 1; i <= (int)S.size(); i++) {
    for (int j = 1; j <= (int)t.size(); j++) {
      if (S[i - 1] != t[j - 1]) {
        dp[i][j] = dp[i - 1][j];
      } else {
        dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
      }
      dp[i][j] %= MOD;
    }
  }
  cout << dp[S.size()][t.size()] << endl;
}
