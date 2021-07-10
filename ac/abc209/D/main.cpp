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

struct Edge {
  int to;
  ll w;
  Edge(int to, ll w) : to(to), w(w) {}
};

using Graph = vector<vector<Edge>>;

template <class T>
bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

int main() {
  // input
  int N, Q;
  cin >> N >> Q;
  vector<ll> a(N), b(N);
  vector<ll> c(Q), d(Q);
  rep(i, N) { cin >> a[i] >> b[i]; }
  rep(i, Q) { cin >> c[i] >> d[i]; }

  // solve
}
