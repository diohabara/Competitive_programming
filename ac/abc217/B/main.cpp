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
  set<string> S;
  rep(_, 3) {
    string s;
    cin >> s;
    S.insert(s);
  }

  // solve
  vector<string> T{"ABC", "ARC", "AGC", "AHC"};
  for (auto& s : T) {
    if (S.find(s) == S.end()) {
      cout << s << endl;
      return 0;
    }
  }
}
