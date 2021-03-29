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
  ll N, ans = 0;
  cin >> N;
  for (ll i = 1; i <= N; i++) {
    ll a;
    cin >> a;
    ll tmp = 1;
    while (tmp <= a) {
      tmp *= 10;
    }
    ans *= tmp;
    ans += a;
    ans %= MOD;
  }
  cout << ans << endl;
}