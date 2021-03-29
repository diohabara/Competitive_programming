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
  int N, K, M;
  cin >> N >> K >> M;
  vector<int> A(N);
  int sum = 0;
  rep(i, N - 1) {
    cin >> A[i];
    sum += A[i];
  }
  if (M * N - sum > K) {
    cout << -1 << endl;
  } else {
    cout << max(0, M * N - sum) << endl;
  }
  return 0;
}