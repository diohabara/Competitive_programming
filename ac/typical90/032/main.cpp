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
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N));
  rep(i, N) {
    rep(j, N) { cin >> A[i][j]; }
  }
  int M;
  cin >> M;
  set<pair<int, int>> banned;
  rep(i, M) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    banned.insert(make_pair(x, y));
    banned.insert(make_pair(y, x));
  }

  // solve
  vector<int> order(N);  // order[i]-th player will be i-th runner
  iota(order.begin(), order.end(), 0);
  int min_time = INF;
  do {
    bool skip = false;  // if this order is banned
    for (int i = 1; i < N; i++) {
      auto baton_pair = make_pair(order[i - 1], order[i]);  // baton pair
      if (0 < banned.count(baton_pair)) {
        skip = true;
        break;
      }
    }
    if (skip) {
      continue;
    }
    int cur_time = 0;
    for (int i = 0; i < N; i++) {
      cur_time += A[order[i]][i];
    }
    min_time = min(min_time, cur_time);
  } while (next_permutation(order.begin(), order.end()));
  if (min_time == INF) {
    cout << -1 << endl;
  } else {
    cout << min_time << endl;
  }
}
