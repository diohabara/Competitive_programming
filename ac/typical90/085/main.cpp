#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

vector<ll> get_divisors(ll n) {
  vector<ll> divisors;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i != 0) continue;
    divisors.push_back(i);
    if (i != n / i) divisors.push_back(n / i);
  }
  return divisors;
}

int main() {
  // input
  ll K;
  cin >> K;

  // solve
  ll ans = 0;

  auto divisors = get_divisors(K);
  sort(divisors.begin(), divisors.end());

  rep(i, divisors.size()) {
    for (int j = i; j < (int)divisors.size(); j++) {
      ll a = divisors[i], b = divisors[j];
      ll c = K / a / b;
      ll rem = K % (a * b);
      if (a > c || b > c || rem != 0) continue;
      ans++;
    }
  }
  cout << ans << endl;
}
