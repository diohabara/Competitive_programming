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
  int N;
  cin >> N;
  string S;
  cin >> S;

  // solve
  rep(i, N) {
    if (S[i] == '1') {
      if (i % 2 == 0) {
        puts("Takahashi");
        return 0;
      } else {
        puts("Aoki");
        return 0;
      }
    }
  }
}
