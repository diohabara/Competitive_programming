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
  vector<ll> C(N);
  rep(i, N) { cin >> C[i]; }

  // solve
  sort(C.begin(), C.end());
  ll total = 0;
  ll res = 1;
  rep(i, N) {
    if (C[i] <= total) {
      cout << 0 << endl;
      return 0;
    }
    res *= (C[i] - total);
    res %= MOD;
    total++;
  }
  cout << res << endl;
}
