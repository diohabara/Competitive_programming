#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

const string YES = "Yes";
const string NO = "No";

int main() {
  // input
  int H, W;
  cin >> H >> W;
  int Q;
  cin >> Q;

  // solve
  dsu d(H * W);
  vector<vector<bool>> grid(H, vector<bool>(W));
  rep(_, Q) {
    int t;
    cin >> t;
    if (t == 1) {
      int r, c;
      cin >> r >> c;
      r--, c--;
      grid[r][c] = true;
      vector<int> dy = {-1, 0, 1, 0};
      vector<int> dx = {0, 1, 0, -1};
      rep(i, 4) {
        int nr = r + dy[i];
        int nc = c + dx[i];
        if (nr < 0 || H <= nr || nc < 0 || W < nc) continue;
        if (grid[nr][nc]) d.merge(nr * W + nc, r * W + c);
      }
    } else {
      int ra, ca, rb, cb;
      cin >> ra >> ca >> rb >> cb;
      ra--, ca--, rb--, cb--;
      if (grid[ra][ca] && grid[rb][cb] && d.same(ra * W + ca, rb * W + cb)) {
        cout << YES << endl;
      } else {
        cout << NO << endl;
      }
    }
  }
}
