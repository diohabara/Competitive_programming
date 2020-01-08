#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = {0, 1, 0, -1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'u', 'r', 'd', 'l'};
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int N, M;
vector<pair<int, int>> buf(2 * 1000000, make_pair(-1, -1));

signed main() {
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i, N) { cin >> A[i]; }
  rep(i, M) { cin >> B[i]; }

  rep(i, N) {
    rep(j, M) {
      int w = A[i] + B[j];
      if (buf[w].first != -1) {
        printf("%d %d %d %d\n", buf[w].first, buf[w].second, i, j);
        return 0;
      } else {
        buf[w].first = i, buf[w].second = j;
      }
    }
  }
  cout << -1 << endl;

  return 0;
}