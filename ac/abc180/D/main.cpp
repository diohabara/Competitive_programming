#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll X, Y, A, B;
  cin >> X >> Y >> A >> B;

  // solve
  ll res = 0;
  while ((double)A * X <= 1e18 && A * X <= B + X && A * X < Y) {
    X *= A;
    res++;
  }
  cout << res + (Y - 1 - X) / B << endl;
}
