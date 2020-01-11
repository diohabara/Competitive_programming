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
int N, M;

signed main() {
  cin >> N >> M;
  vector<ll> a(N);
  rep(i, N) {
    cin >> a[i];
    a[i] /= 2;
  }

  ll L = 1;  // 最小公倍数
  rep(i, N) { L = L * a[i] / __gcd(L, a[i]); }

  rep(i, N) {
    if (L / a[i] % 2 == 0) {
      std::cout << 0 << endl;
      return 0;
    }
  }

  std::cout << (M + L) / L / 2 << endl;

  return 0;
}