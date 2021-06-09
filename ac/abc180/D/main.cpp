#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace boost::multiprecision;
using namespace std;

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  cpp_int X, Y, A, B;
  cin >> X >> Y >> A >> B;

  // solve
  cpp_int res = 0;
  while (true) {
    if (X * A > X + B || X * A >= Y) {
      break;
    }
    res++;
    X *= A;
  }
  cout << res + (Y - X - 1) / B << endl;
}
