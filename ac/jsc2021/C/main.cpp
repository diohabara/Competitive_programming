#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int A, B;
  cin >> A >> B;

  // solve
  int res = 1;
  for (int x = A; x <= B; ++x) {
    for (int y = x + 1; y <= B; ++y) {
      res = max(res, gcd(x, y));
    }
  }
  cout << res << endl;
}
