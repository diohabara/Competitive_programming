#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll powmod(ll x, ll y) {
  ll res = 1;
  rep(i, y) { res = res * x % MOD; }
  return res;
}

int main() {
  // input
  int N;
  cin >> N;

  // solve
  ll res = powmod(10, N) - powmod(9, N) - powmod(9, N) + powmod(8, N);
  res %= MOD;
  res = (res + MOD) % MOD;
  cout << res << endl;
}
