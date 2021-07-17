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
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> AC(N);
  set<int> kinds;
  rep(i, M) {
    int a, c;
    cin >> a >> c;
    a %= N;
    AC[i].first = a;
    AC[i].second = c;
    kinds.emplace(a);
  }

  // solve
  if (kinds.size() != N) {
    cout << kinds.size() << endl;
    cout << -1 << endl;
    return 0;
  }
  dsu d(N + 1);
  int ma = 0;
  ll total_cost = 0;
  sort(AC.begin(), AC.end(),
       [](auto &left, auto &right) { return left.second < right.second; });
  rep(i, M) {
    int a = AC[i].first, c = AC[i].second;
    if (!d.same(a, N)) {
      total_cost += c;
      d.merge(a, N);
      ma = max(ma, c);
    }
  }
  cout << total_cost - ma << endl;
}
