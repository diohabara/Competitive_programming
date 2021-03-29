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
  vector<int> P(N), Q(N), A(N);
  rep(i, N) { cin >> P[i]; }
  rep(i, N) { cin >> Q[i]; }
  rep(i, N) { A[i] = i + 1; }
  int p, q, num = 0;
  do {
    int cntp = 0, cntq = 0;
    rep(i, N) {
      if (A[i] == P[i]) cntp++;
      if (A[i] == Q[i]) cntq++;
    }
    if (cntp == N) {
      p = num;
    }
    if (cntq == N) {
      q = num;
    }
    num++;
  } while (next_permutation(all(A)));
  cout << abs(p - q) << endl;
  return 0;
}