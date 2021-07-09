#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll N, K;
  cin >> N >> K;
  vector<ll> a(N);
  for (auto& x : a) {
    cin >> x;
  }

  // solve
  ll base = K / N;
  vector<ll> copied_a = a;
  sort(copied_a.begin(), copied_a.end());
  map<ll, bool> dup;
  rep(i, K % N) { dup[copied_a[i]] = true; }
  rep(i, N) {
    if (dup[a[i]]) {
      cout << base + 1 << endl;
    } else {
      cout << base << endl;
    }
  }
}
