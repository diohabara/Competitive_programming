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

// return x's prime factors by eratosthenes sieve
vector<int> prime_factors(int x) {
  vector<int> res;
  for (int i = 2; i * i <= x; i++) {
    while (x % i == 0) {
      x /= i;
      res.push_back(i);
    }
  }
  if (x != 1) res.push_back(x);
  return res;
}

int main() {
  // input
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  const auto maxA = max(M, *max_element(A.begin(), A.end()));

  vector<bool> coprime_list(maxA + 1,
                            true);  // coprime_list[i] is true if i is prime
  rep(i, N) {
    vector<int> pf = prime_factors(A[i]);  // prime factors of A[i]
    // false if coprime_list[j] is a mutiple of p
    for (auto& p : pf) {
      if (coprime_list[p]) {  // compute only once
        for (int j = p; j <= maxA; j += p) {
          coprime_list[j] = false;
        }
      }
    }
  }

  vector<int> res;
  for (int i = 1; i <= M; i++) {
    if (coprime_list[i]) {
      res.push_back(i);
    }
  }
  cout << res.size() << endl;
  for (auto& ele : res) {
    if (ele) {
      cout << ele << endl;
    }
  }
}
