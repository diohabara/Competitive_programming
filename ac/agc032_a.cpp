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
int N;

signed main() {
  cin >> N;
  vector<ll> a, b(N);
  rep(i, N) {
    cin >> b[i];
    --b[i];
  }
  rep(i, N) {
    int pivot = -1;
    for (int j = (int)b.size() - 1; j >= 0; --j) {
      if (b[j] == j) {
        pivot = j;
        break;
      }
    }
    if (pivot == -1) {
      cout << -1 << endl;
      return 0;
    }
    a.push_back(pivot + 1);
    b.erase(b.begin() + pivot);
  }
  reverse(all(a));
  for (auto ele : a) {
    cout << ele << endl;
  }
  return 0;
}