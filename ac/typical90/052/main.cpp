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
  vector<ll> A(N);
  rep(i, N) {
    rep(j, 6) {
      int a;
      cin >> a;
      A[i] += a;
    }
  }

  // solve
  ll ans = 1;
  rep(i, N) {
    ans *= A[i];
    ans %= MOD;
  }
  cout << ans << endl;
}
