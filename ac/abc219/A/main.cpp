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
  int X;
  cin >> X;

  // solve
  if (X < 40) {
    cout << 40 - X << endl;
  } else if (X < 70) {
    cout << 70 - X << endl;
  } else if (X < 90) {
    cout << 90 - X << endl;
  } else {
    cout << "expert" << endl;
  }
}
