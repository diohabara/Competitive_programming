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
  vector<int> A(N);
  rep(i, N) { cin >> A[i]; }
  sort(all(A));
  ll res = 1, sum = A[0];
  for (int i = 1; i < N; i++) {
    if (2 * sum < A[i]) {
      res = 0;
    }
    sum += A[i];
    ++res;
  }
  cout << res << endl;
  return 0;
}