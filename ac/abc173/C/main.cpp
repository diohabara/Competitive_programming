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
  int H, W, K;
  cin >> H >> W >> K;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  // solve
  int cnt = 0;
  for (int h_bit = 0; h_bit < (1 << H); h_bit++) {
    for (int w_bit = 0; w_bit < (1 << W); w_bit++) {
      int tmp = 0;
      for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
          if (h_bit & (1 << h) && w_bit & (1 << w)) {
            tmp += S[h][w] == '#' ? 1 : 0;
          }
        }
      }
      if (tmp == K) cnt++;
    }
  }
  cout << cnt << endl;
}
