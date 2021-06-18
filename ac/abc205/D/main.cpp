#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
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
  vector<ll> K(Q);
  rep(i, Q) { cin >> K[i]; }

  // solve
  vector<ll> C(N);
  rep(i, N) { C[i] = A[i] - (i + 1); }
  rep(i, Q) {
    if (C[N - 1] < K[i]) {
      cout << A[N - 1] + (K[i] - C[N - 1]) << endl;
    } else {
      auto it = lower_bound(C.begin(), C.end(), K[i]);
      auto lower_i = distance(C.begin(), it);
      cout << (A[lower_i] - 1) - (C[lower_i] - K[i]) << endl;
    }
  }
}
