#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
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
  dsu d(N);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    d.merge(a, b);
  }

  // solve
  int ans = 0;
  for (auto& g : d.groups()) {
    ans = max(ans, (int)g.size());
  }
  cout << ans << endl;
}
