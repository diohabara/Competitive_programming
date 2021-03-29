#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(obj) (obj).begin(), (obj).end()
static const int dx[4] = {0, 1, 0, -1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'u', 'r', 'd', 'l'};
static const ll INF = 1ll << 60;
static const ll MOD = 1e9 + 7;
int N;

ll pw(int base, int power) {
  ll res = 1;
  while (power) {
    if (power & 1) {
      (res *= base) %= MOD;
    }
    (base *= base) %= MOD;
    power >>= 1;
  }
  return res;
}

struct Sieve {
  ll n;
  vector<ll> f, primes;
  Sieve(ll n = 1) : n(n), f(n + 1) {
    f[0] = f[1] = -1;
    for (ll i = 2; i <= n; i++) {
      if (f[i]) continue;
      primes.push_back(i);
      f[i] = i;
      for (ll j = i * i; j <= n; j += i) {
        if (!f[j]) f[j] = i;
      }
    }
  }
  bool isPrime(ll x) { return f[x] == x; }
  vector<ll> factorList(ll x) {
    vector<ll> res;
    while (x != 1) {
      res.push_back(f[x]);
      x /= f[x];
    }
    return res;
  }
  vector<pll> factor(int x) {
    vector<ll> fl = factorList(x);
    if (fl.size() == 0) {
      return {};
    }
    vector<pll> res(1, pll(fl[0], 0));
    for (int p : fl) {
      if (res.back().first == p) {
        res.back().second++;
      } else {
        res.emplace_back(p, 1);
      }
    }
    return res;
  }
};

signed main() {
  Sieve sieve(1e6);
  cin >> N;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }
  map<ll, ll> mp;
  rep(i, N) {
    auto f = sieve.factor(A[i]);
    for (auto p : f) {
      mp[p.first] = max(mp[p.first], p.second);
    }
  }

  ll lcm = 1;
  for (auto p : mp) {
    rep(i, p.second) { lcm *= p.first; }
  }

  ll res = 0;
  rep(i, N) { res = pw(i, A[i]) % MOD; }

  cout << res << endl;
  return 0;
}