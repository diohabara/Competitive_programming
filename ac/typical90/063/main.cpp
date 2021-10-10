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
  int H, W;
  cin >> H >> W;
  vector<vector<int>> P(H, vector<int>(W));
  rep(i, H) rep(j, W) cin >> P[i][j];

  // solve
  int ans = 0;
  // brute-force seach rows using bit-mask
  for (int mask = 1; mask < (1 << H); mask++) {
    vector<int> R;
    map<int, int> cnt_of_num;
    // find the longest continuous sequence of same numbers
    // for each column, every element must be the same
    rep(col, W) {
      int num = -1;
      bool is_all_same = true;
      rep(row, H) {
        if ((mask & (1 << row)) == 0) continue;
        if (num == -1)
          num = P[row][col];
        else if (num != P[row][col])
          is_all_same = false;
      }
      if (is_all_same) cnt_of_num[num]++;
    }
    int cntH = 0, cntW = 0;
    for (auto& [num, cnt] : cnt_of_num) {
      cntW = max(cntW, cnt);
    }
    rep(row, H) {
      if (mask & (1 << row)) cntH++;
    }
    ans = max(ans, cntH * cntW);
  }
  cout << ans << endl;
}
