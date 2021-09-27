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
  vector<int> has_only_one_less_edge(N);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    has_only_one_less_edge[max(a, b)]++;
  }

  // solve
  int ans = 0;
  rep(i, N) {
    if (has_only_one_less_edge[i] == 1) {
      ans++;
    }
  }
  cout << ans << endl;
}
