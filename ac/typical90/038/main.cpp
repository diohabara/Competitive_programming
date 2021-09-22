#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll A, B;
  cin >> A >> B;
  const ll POW18 = 1000000000000000000LL;

  // solve
  ll r = B / gcd(A, B);
  /** necessary condtion to LCM(= A*B/GCD) is over 1e18
   * POW18 * GCD < A * B
   */
  if (POW18 / A < r) {
    cout << "Large" << endl;
  } else {
    cout << A * r << endl;
  }
}
