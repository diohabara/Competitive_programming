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
  ll X, K, D;
  cin >> X >> K >> D;

  // solve
  X = abs(X);
  if (X / D > K) {
    cout << X - D * K << endl;
    return 0;
  }
  if ((K - X / D) % 2 == 0) {
    cout << X % D << endl;
  } else {
    cout << D - X % D << endl;
  }
}
