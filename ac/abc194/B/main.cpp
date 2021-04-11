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
  vector<ll> A(N), B(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i] >> B[i];
  }

  // solve
  ll res = INF;
  rep(i, N) { res = min(res, A[i] + B[i]); }
  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;
      res = min(res, max(A[i], B[j]));
    }
  }
  cout << res << endl;
}
