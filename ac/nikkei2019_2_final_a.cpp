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
  vector<int> l(N), r(N);
  rep(i, N) { cin >> A[i]; }
  ll ans = 0;
  rep(i, N) {
     for (int j = 0; j < i; j++) {
       if (A[j] < A[i]) {
         l[i]++;
       }
     }
     for (int j = i + 1; j < N; j++) {
       if (A[j] < A[i]) {
         r[i]++;
       }
     }
  }
  rep(i, N) {
    ans += l[i] * r[i];
  }
  cout << ans << endl;
  return 0;
}