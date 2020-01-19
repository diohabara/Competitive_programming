#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = {0, 1, 0, -1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'u', 'r', 'd', 'l'};
static const ll INF = 1l << 60;
static const ll MOD = 1e9 + 7;
typedef pair<int, int> P;

int N;

signed main() {
  cin >> N;
  vector<P> v(N);
  rep(i, N) {
    ll a, l;
    cin >> a >> l;
    v[i] = {a - l, a + l};
  }
  sort(all(v), [](P a, P b) { return a.second < b.second; });

  int res = 0;
  ll cur = -INF; // 現在選んでいる区間の中で最も右
  rep(i, N) {
    if (cur > v[i].first) continue; // 被るのは飛ばす
    ++res;
    cur = v[i].second;
  }
  cout << res << endl;
  return 0;
}