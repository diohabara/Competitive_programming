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
  int N, L;
  cin >> N >> L;

  // solve
  vector<ll> res(N + 1);
  res[0] = 1;
  rep(i, N) {
    if (i + L <= N) {
      res[i + L] += res[i];
      res[i + L] %= MOD;
    }
    res[i + 1] += res[i];
    res[i + 1] %= MOD;
  }
  cout << res[N] << endl;
}
