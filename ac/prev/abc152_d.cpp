#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = {0, 1, 0, -1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'u', 'r', 'd', 'l'};
static const ll INF = 1ll << 60;
static const ll MOD = 1e9 + 7;
int N;

signed main() {
  cin >> N;
  int cnt[10][10];
  memset(cnt, 0, sizeof(cnt));
  for (int i = 1; i <= N; i++) {
    string s = to_string(i);
    cnt[s.front() - '0'][s.back() - '0']++;
  }
  int res = 0;
  for (int i = 1; i <= 9; i++) {
    for (int j = i; j <= 9; j++) {
      if (i == j)
        res += cnt[i][j] * cnt[j][i];
      else
        res += cnt[i][j] * cnt[j][i] * 2;
    }
  }
  cout << res << endl;
  return 0;
}