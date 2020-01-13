#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = {0, 1, 0, -1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'u', 'r', 'd', 'l'};
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
typedef pair<int, int> pint;

int bfs(const vector<string>& v, int x, int y) {
  int H = v.size(), W = v[0].size();
  vector<vector<int>> dist(H, vector<int>(W, -1));
  queue<pint> que;

  int res = 0;
  que.push({x, y});
  dist[x][y] = 0;
  while (!que.empty()) {
    int x = que.front().first, y = que.front().second;
    res = max(res, dist[x][y]);
    que.pop();
    rep(dir, 4) {
      int nx = x + dx[dir], ny = y + dy[dir];
      if (0 <= nx && nx < H && 0 <= ny && ny < W && v[nx][ny] != '#') {
        if (dist[nx][ny] == -1) {
          dist[nx][ny] = dist[x][y] + 1;
          que.push({nx, ny});
        }
      }
    }
  }
  return res;
}

signed main() {
  int H, W;
  cin >> H >> W;
  vector<string> v(H);
  rep(i, H) { cin >> v[i]; }

  int res = 0;
  rep(x, H) {
    rep(y, W) {
      if (v[x][y] == '#') {
        continue;
      }
      res = max(res, bfs(v, x, y));
    }
  }
  cout << res << endl;

  return 0;
}