#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = {0, 1, 0, -1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'u', 'r', 'd', 'l'};
static const ll INF = 1ll << 60;
static const ll MOD = 1e9 + 7;

static const int MAX_N = 1e5;

signed main() {
  int N;
  cin >> N;
  vector<ll> a(N), L;
  rep(i, N) { cin >> a[i]; }

  L.push_back(a[0]);
  for (int i = 1; i < N; i++) {
    if (*(L.end() - 1) < a[i])
      L.push_back(a[i]);
    else
      *lower_bound(all(L), a[i]) = a[i];
  }
  cout << L.size() << endl;
  return 0;
}