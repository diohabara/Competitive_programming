#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
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
  string S, T;
  cin >> S >> T;

  // solve
  rep(i, S.size()) {
    rep(j, S.size()) {
      if (2 <= abs(i - j)) continue;
      string s = S;
      swap(s[i], s[j]);
      if (s == T) {
        cout << YES << endl;
        return 0;
      }
    }
  }
  cout << NO << endl;
}
