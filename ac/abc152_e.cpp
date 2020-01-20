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

ll lcm(ll a, ll b) {
  ll gcd = __gcd(a, b);
  return a * b / gcd;
}

signed main() {
  cin >> N;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }
  if (N == 1) {
    cout << 1 << endl;
  }

  vector<ll> B(N);
  ll l = lcm(A[0], A[1]);
  rep(i, N) { l = lcm(l, A[i]); }
  rep(i, N) { B[i] = l / A[i]; }
  ll res = 0ll;
  for (auto& b : B) {
    res = (res + b) % MOD;
  }
  cout << res << endl;
  return 0;
}