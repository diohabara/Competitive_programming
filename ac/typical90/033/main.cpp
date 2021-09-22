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

  // solve
  if (H == 1 || W == 1) {
    cout << H * W << endl;
  } else {
    cout << ((H + 1) / 2) * ((W + 1) / 2) << endl;
  }
}
