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
  const int MAX = 210000;
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }
  // output
  dsu d(MAX);
  rep(i, N / 2) { d.merge(A[i], A[N - 1 - i]); }
  ll res = 0;
  rep(i, MAX) {
    if (d.leader(i) == i) {
      res += d.size(i) - 1;
    }
  }
  cout << res << endl;
}
