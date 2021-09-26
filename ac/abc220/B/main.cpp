#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll base_k_to_10(string n, ll k) {
  ll res = 0;
  rep(i, n.size()) { res = res * k + int(int(n[i] - '0')); }
  return res;
}

int main() {
  // input
  ll K;
  cin >> K;
  string A, B;
  cin >> A >> B;

  // solve
  cout << ll(base_k_to_10(A, K)) * ll(base_k_to_10(B, K)) << endl;
}
