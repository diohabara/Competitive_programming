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
  ll N, K, S;
  cin >> N >> K >> S;
  vector<ll> A(N);
  if (S != 1000000000) {
    rep(i, N) {
      if (i < K) {
        A[i] = S;
      } else {
        A[i] = S + 1;
      }
    }
  } else {
    rep(i, N) {
      if (i < K) {
        A[i] = S;
      } else {
        A[i] = 1;
      }
    }
  }
  rep(i, N) {
    if (i) {
      cout << " ";
    }
    cout << A[i];
  }
  cout << endl;
  return 0;
}