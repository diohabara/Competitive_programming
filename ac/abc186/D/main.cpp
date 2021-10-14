#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  // solve
  ll ans = 0;
  sort(A.begin(), A.end());
  vector<ll> cum(N + 1);  // cum[i] := 0 + A[0] + ... + A[i]
  rep(i, N) cum[i + 1] = cum[i] + A[i];
  rep(i, N) ans += (cum[N] - cum[i]) - (N - i) * A[i];
  cout << ans << endl;
}
