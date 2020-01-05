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
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    int a;
    cin >> a;
    if (a == 1) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}