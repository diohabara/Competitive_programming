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
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));
  rep(i, H) {
    rep(j, W) { cin >> A[i][j]; }
  }
  rep(i, H) {
    rep(j, W) { cin >> B[i][j]; }
  }

  // solve
  int res = 0;
  rep(i, H - 1) {
    rep(j, W - 1) {
      int diff = B[i][j] - A[i][j];
      A[i][j] += diff;
      A[i + 1][j] += diff;
      A[i][j + 1] += diff;
      A[i + 1][j + 1] += diff;
      res += abs(diff);
    }
  }
  if (A == B) {
    cout << YES << endl;
    cout << res << endl;
  } else {
    cout << NO << endl;
  }
}
