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
  ll N, M;
  cin >> N >> M;
  vector<ll> A(M), B(M), C(M);
  rep(i, M) { cin >> A[i] >> B[i] >> C[i]; }

  // solve
  vector<ll> dist(N);
  ll res = 0;
  rep(i, M) {
    rep(j, M) {
      rep(k, M) {}
    }
  }
}
