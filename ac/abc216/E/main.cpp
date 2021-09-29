#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

// a: initial item
// d: difference of successive members
// n: number of members
ll arith_sum(ll a, ll d, ll n) { return (2 * a + (n - 1) * d) * n / 2; }

int main() {
  // input
  int N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) {
    ll a;
    cin >> a;
    A[i] = a;
  }

  // solve
  ll ans = 0;
  sort(A.begin(), A.end(), greater<ll>());
  A.push_back(0);
  rep(i, N) {
    ll first = A[i], second = A[i + 1];
    ll diff = first - second;
    // e.g.
    // adding elements together
    // A[i] = 7, A[i+1] = 5, A[i+2] = 3
    // sub_cnt = 2
    // A[i] = 5, A[i+1] = 5, A[i+2] = 3
    // sub_cnt = 2 * 2
    ll sub_cnt = diff * (i + 1);
    // all diff can be used
    if (sub_cnt <= K) {
      K -= sub_cnt;
      ans += arith_sum(A[i], -1, diff) * (i + 1);
    } else {               // partial diff can be used
      ll d = K / (i + 1);  // subtract times for diff
      ll m = K % (i + 1);  // subtract times for A[i]
      ans += arith_sum(A[i], -1, d) * (i + 1);
      ans += (A[i] - d) * m;
      break;
    }
  }
  cout << ans << endl;
}
