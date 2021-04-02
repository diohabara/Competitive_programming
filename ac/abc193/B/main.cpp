#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N), P(N), X(N);
  rep(i, N) { cin >> A[i] >> P[i] >> X[i]; }
  ll min_sum = INF;
  rep(i, N) {
    if (0 < X[i] - A[i]) {
      min_sum = min(min_sum, P[i]);
    }
  }
  if (min_sum == INF) {
    cout << -1 << endl;
  } else {
    cout << min_sum << endl;
  }
  return 0;
}
