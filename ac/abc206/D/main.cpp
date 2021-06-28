#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
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
  // solve
  int res = 0;
  const int M = 200005;
  dsu d(M);
  rep(i, N) { d.merge(A[i], A[N - 1 - i]); }
  rep(i, M) {
    if (d.leader(i) != i) {
      continue;
    }
    res += d.size(i) - 1;
  }
  cout << res << endl;
}
