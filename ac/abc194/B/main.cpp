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
  vector<ll> A(N), B(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i] >> B[i];
  }

  ll res = INF;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (i == j) {
        res = min(res, A[i] + B[j]);
      } else {
        res = min(res, max(A[i], B[j]));
      }
    }
  }
  cout << res << endl;
  return 0;
}
