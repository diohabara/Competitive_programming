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
  int N;
  cin >> N;
  vector<ll> t(N), l(N), r(N);
  rep(i, N) { cin >> t[i] >> l[i] >> r[i]; }
  // solve
  ll res = 0;
  rep(i, N) {
    double li, ri = 0.0;
    if (t[i] == 1) {
      li = l[i];
      ri = r[i];
    } else if (t[i] == 2) {
      li = l[i];
      ri = r[i] - 0.5;
    } else if (t[i] == 3) {
      li = l[i] + 0.5;
      ri = r[i];
    } else if (t[i] == 4) {
      li = l[i] + 0.5;
      ri = r[i] - 0.5;
    }
    rep(j, N) {
      double lj, rj = 0.0;
      if (j == i) {
        continue;
      }
      if (t[j] == 1) {
        lj = l[j];
        rj = r[j];
      } else if (t[j] == 2) {
        lj = l[j];
        rj = r[j] - 0.5;
      } else if (t[j] == 3) {
        lj = l[j] + 0.5;
        rj = r[j];
      } else if (t[j] == 4) {
        lj = l[j] + 0.5;
        rj = r[j] - 0.5;
      }
      if (max(li, lj) <= min(ri, rj)) {
        res++;
      }
    }
  }
  cout << res / 2 << endl;
}
