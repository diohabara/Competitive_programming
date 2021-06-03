#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll r1, c1, r2, c2;
  cin >> r1 >> c1;
  cin >> r2 >> c2;

  // solve
  // ref: https://drken1215.hatenablog.com/entry/2020/11/22/224600
  int r = abs(r2 - r1), c = abs(c2 - c1);
  int res = 3;
  if (r == 0 && c == 0) {
    res = 0;
  } else if (r == c || r + c <= 3) {
    res = 1;
  } else if ((r + c) % 2 == 0 || r + c <= 6 || abs(r - c) <= 3) {
    res = 2;
  }
  cout << res << endl;
}