#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

vector<ll> prime_factorize(ll n) {
  vector<ll> primes;
  auto rem = n;
  for (ll i = 2; i * i <= n; i++) {
    while (rem % i == 0) {
      primes.push_back(i);
      rem /= i;
    }
  }
  if (rem != 1) primes.push_back(rem);
  return primes;
}

int main() {
  // input
  ll N;
  cin >> N;

  // solve
  auto divisors = prime_factorize(N);
  cout << ceil(log2(divisors.size())) << endl;
}
