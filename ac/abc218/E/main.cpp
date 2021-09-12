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
  vector<int> edge(N);
  vector<int> cost(M);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
    cin >> cost[i];
  }
  return 0;
}
