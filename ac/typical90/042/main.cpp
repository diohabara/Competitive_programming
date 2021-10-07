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
  int K;
  cin >> K;

  // solve
  if (K % 9 == 0) {
    vector<ll> dp(K + 1);
    dp[0] = 1;
    for (int top = 1; top <= K; top++) {
      for (int prev = top - 1; prev >= top - 9 && prev >= 0; prev--) {
        dp[top] += dp[prev];
        dp[top] %= MOD;
      }
    }
    cout << dp[K] << endl;
  } else {
    cout << 0 << endl;
  }
}
