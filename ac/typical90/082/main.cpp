#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

// use inverse element to a / b
ll Div(ll a, ll b, ll m) { return a * pow_mod(b, m - 2, m) % m; }

// sum of arithmetic sequence
ll sum_of_1_to_x(ll x) {
  ll v = (x % MOD) * ((x + 1) % MOD) % MOD;
  return Div(v, 2, MOD);
}

int main() {
  // input
  unsigned long long L, R;
  cin >> L >> R;

  // solve
  vector<unsigned long long> power10(20);
  power10[0] = 1;
  for (int i = 1; i <= 19; i++) {
    power10[i] = (10ULL * power10[i - 1]);
  }
  ll res = 0;
  for (int i = 1; i <= 19; i++) {
    // count i-digit numbers
    unsigned long long vl = max(L, power10[i - 1]);
    unsigned long long vr = min(R, power10[i] - 1ULL);
    if (vl > vr) continue;
    /** sum([ vl, vl+1, ..., vr ])
     * = sum([ 1, 2, ..., vr ]) - sum([ 1, ..., vl - 1 ])
     */
    unsigned long long cnt =
        (sum_of_1_to_x(vr) - sum_of_1_to_x(vl - 1) + MOD) % MOD;
    // i * i-digit count
    res += i * cnt;
    res %= MOD;
  }
  cout << res << endl;
}
