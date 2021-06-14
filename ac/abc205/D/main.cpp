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
  rep(i, Q) {
    auto iter_lower = lower_bound(A.begin(), A.end(), K[i]);
    cout << K[i] + distance(A.begin(), iter_lower) << endl;
  }
}
