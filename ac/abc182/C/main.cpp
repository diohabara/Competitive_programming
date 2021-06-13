#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  string N;
  cin >> N;

  // solve
  vector<int> rems{0, 0, 0};
  int rem = 0, cnt = N.length();
  int res = -1;
  for (char c : N) {
    rems[(c - '0') % 3]++;
    rem += (c - '0');
  }
  rem %= 3;

  if (rem == 0) {
    res = 0;
  } else if (rem == 1) {
    if (0 < rems[1] && 2 <= cnt) {
      res = 1;
    } else if (1 < rems[2] && 3 <= cnt) {
      res = 2;
    }
  } else if (rem == 2) {  // rem == 2
    if (0 < rems[2] && 2 <= cnt) {
      res = 1;
    } else if (1 < rems[1] && 3 <= cnt) {
      res = 2;
    }
  }
  cout << res << endl;
}