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
  ll N, K;
  cin >> N >> K;

  // solve
  if (K == 1) {
    cout << (N == 1 ? 1 : 0) << endl;
  } else if (N == 1) {
    cout << K % MOD << endl;
  } else if (N == 2) {
    cout << K % MOD * (K - 1) % MOD << endl;
  } else {
    cout << K % MOD * (K - 1) % MOD * pow_mod(K - 2, N - 2, MOD) % MOD << endl;
  }
}
