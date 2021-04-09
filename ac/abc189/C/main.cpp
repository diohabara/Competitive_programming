#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  int res = 0;
  rep(l, N) {
    int x = A[l];
    for (int r = l; r < N; r++) {
      x = min(x, A[r]);
      res = max(res, x * (r - l + 1));
    }
  }
  cout << res << endl;
  return 0;
}
