#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

vector<pair<ll, ll> > prime_factorize(ll N) {
  vector<pair<ll, ll> > res;
  for (ll a = 2; a * a <= N; ++a) {
    if (N % a != 0) continue;
    ll ex = 0;
    while (N % a == 0) {
      ++ex;
      N /= a;
    }
    res.push_back({a, ex});
  }
  if (N != 1) res.push_back({N, 1});
  return res;
}

ll get_unique_exp(ll exp) {
  ll sum = 0;
  ll cnt = 0;
  ll cur = 1;
  while (sum < exp) {
    cnt++;
    cur++;
    sum += cur;
  }
  return cnt;
}

int main() {
  // input
  ll N;
  cin >> N;

  // solve
  auto primes = prime_factorize(N);
  ll ans = 0;
  for (auto& [p, e] : primes) {
    ans += get_unique_exp(e);
  }
  cout << ans << endl;
}