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
  ll L, Q;
  cin >> L >> Q;
  set<ll> x_set{0, L};

  // solve
  rep(_, Q) {
    ll c, x;
    cin >> c >> x;
    if (c == 1) {
      x_set.insert(x);
    } else {
      auto greater_it = x_set.lower_bound(x);
      cout << *greater_it - *prev(greater_it) << endl;
    }
  }
}
