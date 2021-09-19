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
  vector<string> S(3);
  rep(i, 3) cin >> S[i];
  string T;
  cin >> T;

  // solve
  rep(i, T.size()) {
    if (T[i] == '1') {
      cout << S[0];
    } else if (T[i] == '2') {
      cout << S[1];
    } else {
      cout << S[2];
    }
  }
  cout << endl;
}
