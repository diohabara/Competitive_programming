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
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }
  int Q;
  cin >> Q;
  vector<ll> B(Q);
  rep(i, Q) { cin >> B[i]; }

  // solve
  sort(A.begin(), A.end());
  rep(i, Q) {
    auto it = upper_bound(A.begin(), A.end(), B[i]);
    auto big_ele = *it;
    auto prev_ele = prev(it);
    if (A.begin() <= prev_ele && prev_ele <= A.end()) {
      cout << min({abs(big_ele - B[i]), abs(*prev_ele - B[i])}) << endl;
    } else {
      cout << abs(big_ele - B[i]) << endl;
    }
  }
}
