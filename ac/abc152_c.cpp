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
  vector<ll> P(N);
  rep(i, N) { cin >> P[i]; }
  ll minv = P[0];
  ll res = 0;
  rep(i, N) {
    if (P[i] <= minv) {
      res++;
      minv = P[i];
    }
  }
  cout << res << endl;
  return 0;
}