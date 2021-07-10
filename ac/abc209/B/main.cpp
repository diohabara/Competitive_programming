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

const string YES = "Yes";
const string NO = "No";

int main() {
  // input
  int N, X;
  cin >> N >> X;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  ll total = 0;
  rep(i, N) {
    total += A[i];
    if (i % 2 == 1) {
      total--;
    }
  }
  if (total <= X) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
}
