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
  vector<vector<int>> A(H, vector<int>(W));
  rep(i, H) {
    rep(j, W) { cin >> A[i][j]; }
  }

  // solve
  for (int i1 = 0; i1 < H; i1++) {
    for (int j1 = 0; j1 < W; j1++) {
      for (int i2 = i1; i2 < H; i2++) {
        for (int j2 = j1; j2 < W; j2++) {
          if (!(A[i1][j1] + A[i2][j2] <= A[i2][j1] + A[i1][j2])) {
            cout << NO << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << YES << endl;
}
