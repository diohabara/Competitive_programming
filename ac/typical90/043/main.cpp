#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

struct state {
  ll y, x, dir;
};

int main() {
  // input
  int H, W;
  cin >> H >> W;
  int rs, cs;
  cin >> rs >> cs;
  int rt, ct;
  cin >> rt >> ct;
  rs--, cs--, rt--, ct--;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  // solve
  vector<int> dx{-1, 0, 1, 0};
  vector<int> dy{0, 1, 0, -1};
  vector<vector<vector<ll>>> dist(H, vector<vector<ll>>(W, vector<ll>(4, INF)));
  deque<state> deq;
  rep(i, 4) {
    dist[rs][cs][i] = 0;
    deq.push_back({rs, cs, i});
  }
  while (deq.size()) {
    auto [y, x, dir] = deq.front();
    deq.pop_front();
    rep(new_dir, 4) {
      ll ny = y + dy[new_dir];
      ll nx = x + dx[new_dir];
      ll cost = dist[y][x][dir];
      if (dir != new_dir) cost++;
      if (ny < 0 || H <= ny || nx < 0 || W <= nx || S[ny][nx] == '#' ||
          dist[ny][nx][new_dir] <= cost) {
        continue;
      }
      dist[ny][nx][new_dir] = cost;
      if (dir != new_dir)
        deq.push_back({ny, nx, new_dir});
      else
        deq.push_front({ny, nx, new_dir});
    }
  }
  ll ans = INF;
  rep(i, 4) { ans = min(ans, dist[rt][ct][i]); }
  cout << ans << endl;
}
