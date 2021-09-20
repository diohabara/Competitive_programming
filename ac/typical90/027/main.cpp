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
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) { cin >> S[i]; }

  // solve
  set<string> appeared;
  rep(i, N) {
    if (appeared.count(S[i]) == 0) {
      appeared.insert(S[i]);
      cout << i + 1 << endl;
    }
  }
}
