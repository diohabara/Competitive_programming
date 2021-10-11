#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int H, W;
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
vector<vector<bool>> visited;

int dfs(int sx, int sy, int px, int py, vector<string>& c) {
  // it gets back to the start
  if (sx == px && sy == py && visited[px][py]) return 0;
  visited[px][py] = true;  // it visits (px, py)
  int ret = -INF;          // MUST be small enough
  for (auto& [dx, dy] : dir) {
    auto [nx, ny] = make_tuple(px + dx, py + dy);
    if (nx < 0 || ny < 0 || H <= nx || W <= ny || c[nx][ny] == '#') continue;
    if ((sx != nx || sy != ny) && visited[nx][ny]) continue;
    ret = max(ret, dfs(sx, sy, nx, ny, c) + 1);
  }
  visited[px][py] = false;  // it backtracks from (px, py)
  return ret;
}

int main() {
  // input
  cin >> H >> W;
  vector<string> c(H);
  rep(i, H) { cin >> c[i]; }

  // solve
  int ans = -1;
  visited.resize(H, vector<bool>(W));
  rep(x, H) {
    rep(y, W) {
      if (c[x][y] == '#') continue;
      ans = max(ans, dfs(x, y, x, y, c));
    }
  }

  if (ans <= 2) ans = -1;
  cout << ans << endl;
}
