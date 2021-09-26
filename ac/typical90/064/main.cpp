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
  int N, Q;
  cin >> N >> Q;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }
  vector<ll> L(Q), R(Q), V(Q);
  rep(i, Q) {
    cin >> L[i] >> R[i] >> V[i];
    R[i]--, L[i]--;
  }

  // solve
  ll conv = 0;          // sum of "incovenience"
  vector<ll> B(N - 1);  // sequence of differences
  rep(i, N - 1) {
    B[i] = A[i + 1] - A[i];
    conv += abs(B[i]);
  }

  rep(i, Q) {
    /**
     * A := [left] + [changed] + [right]
     * [rightmost of left] and [leftmost of right] changes the convenience.
     * L[i] = 1, R[i] = 2, V[i] = 3
     * A: [1, 2, 6, 4, 9]
     * => [4, 5, 6, 4, 9]
     * B: [1, 4, 2, 5]
     * => [1, 1, 2, 5]
     *
     * L[i] = 2, R[i] = 4, V[i] = -2
     * A: [1, 2, 6, 4, 9]
     * => [1, 0, 4, 2, 9]
     * B: [1, 4, 2, 5]
     * => [1, 4, 2, 7]
     */
    int l = L[i], r = R[i], v = V[i];
    if (0 < l) {
      conv -= abs(B[l - 1]);  // convenience before
      B[l - 1] += v;
      conv += abs(B[l - 1]);  // convenience after
    }
    if (r < N - 1) {
      conv -= abs(B[r]);
      B[r] -= v;
      conv += abs(B[r]);
    }
    cout << conv << endl;
  }
}
