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
  int N, M;
  cin >> N >> M;
  vector<vector<ll>> B(N, vector<ll>(M));
  rep(i, N) {
    rep(j, M) {
      cin >> B[i][j];
      B[i][j]--;
    }
  }

  // solve
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (0 < i && B[i][j] != B[i - 1][j] + 7) {
        cout << NO << endl;
        return 0;
      }
      if (0 < j && B[i][j] != B[i][j - 1] + 1) {
        cout << NO << endl;
        return 0;
      }
      // cerr << B[i][j] % 7;
    }
    // cerr << endl;
  }
  vector<ll> vec = B[0];
  int prev = -1;
  for (auto& e : vec) {
    e %= 7;
    if (e < prev) {
      cout << NO << endl;
      return 0;
    }
    prev = e;
  }
  cout << YES << endl;
}
