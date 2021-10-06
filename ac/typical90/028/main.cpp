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
  vector<vector<int>> paper(1001, vector<int>(1001));
  rep(i, N) {
    int lx, ly, rx, ry;
    cin >> lx >> ly >> rx >> ry;
    paper[lx][ly]++;
    paper[rx][ry]++;
    paper[lx][ry]--;
    paper[rx][ly]--;
  }

  // solve
  // horizontally cumulative sum
  rep(y, 1001) {
    rep(x, 1000) { paper[y][x + 1] += paper[y][x]; }
  }
  // vertically cumulative sum
  rep(x, 1001) {
    rep(y, 1000) { paper[y + 1][x] += paper[y][x]; }
  }
  vector<ll> ans(N + 1);
  for (auto& row : paper) {
    for (auto& e : row) {
      ans[e]++;
    }
  }
  for (int i = 1; i <= N; i++) {
    cout << ans[i] << endl;
  }
}
