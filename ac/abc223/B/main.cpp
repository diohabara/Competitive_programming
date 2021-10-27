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
  string S;
  cin >> S;

  // solve
  string ma = S, mi = S;
  rep(i, S.size()) {
    rotate(S.begin(), S.begin() + 1, S.end());
    ma = max(S, ma);
    mi = min(S, mi);
  }
  cout << mi << endl;
  cout << ma << endl;
}
