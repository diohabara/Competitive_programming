#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
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
  vector<ll> C(N), P(N);
  rep(i, N) { cin >> C[i] >> P[i]; }
  int Q;
  cin >> Q;
  vector<ll> L(Q), R(Q);
  rep(i, Q) { cin >> L[i] >> R[i]; }

  // solve
  vector<ll> acc1(N + 1, 0), acc2(N + 1, 0);
  for (int i = 1; i <= N; i++) {
    if (C[i - 1] == 1) {
      acc1[i] = acc1[i - 1] + P[i - 1];
      acc2[i] = acc2[i - 1];
    } else {
      acc1[i] = acc1[i - 1];
      acc2[i] = acc2[i - 1] + P[i - 1];
    }
  }
  rep(i, Q) {
    cout << acc1[R[i]] - acc1[L[i] - 1] << " " << acc2[R[i]] - acc2[L[i] - 1]
         << endl;
  }
}
