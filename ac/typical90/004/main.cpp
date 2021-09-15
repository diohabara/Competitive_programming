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
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  rep(i, H) {
    rep(j, W) { cin >> A[i][j]; }
  }

  // solve
  vector<int> rows(H);
  vector<int> columns(W);
  rep(i, H) {
    rep(j, W) { rows[i] += A[i][j]; }
  }
  rep(j, W) {
    rep(i, H) { columns[j] += A[i][j]; }
  }
  rep(i, H) {
    rep(j, W) {
      if (j != 0) {
        cout << " ";
      }
      cout << rows[i] + columns[j] - A[i][j];
    }
    cout << "\n";
  }
}
