#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];

  if (N == 1) {
    cout << A[0] << endl;
    return 0;
  }

  ll mi = INF;
  for (int mask = 0; mask < 1 << (N - 1); ++mask) {
    ll total = 0;
    ll cur = A[0];
    for (int i = 1; i < N; ++i) {
      if (mask & (1 << (i - 1))) {
        total ^= cur;
        cur = 0;
      }
      cur |= A[i];
    }
    total ^= cur;
    mi = min(mi, total);
  }
  cout << mi << endl;
  return 0;
}
