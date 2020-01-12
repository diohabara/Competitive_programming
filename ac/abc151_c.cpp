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

signed main() {
  int N, M;
  cin >> N >> M;
  vector<int> ps(N),tmpwa(N);
  int ac = 0, wa = 0;
  rep(i, M) {
    int p;
    string s;
    cin >> p >> s;
    --p;
    if (s == "WA") {
      tmpwa[p]++;
    } else {
      if (ps[p] == 0) {
        ac++;
        wa += tmpwa[p];
        ps[p]++;
      }
    }
  }
  cout << ac << " " << wa << endl;
  return 0;
}