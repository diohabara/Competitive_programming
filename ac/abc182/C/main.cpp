#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll N;
  cin >> N;

  // solve
  ll cnt[3] = {0};
  while (N) {
    cnt[N % 10 % 3]++;
    N /= 10;
  }
  int cur = (cnt[1] + 2 * cnt[2]) % 3;
  int k = cnt[0] + cnt[1] + cnt[2];
  int res;
  if (cur == 0) {
    res = 0;
  } else if (cur == 1) {
    if (cnt[1]) {
      if (k == 1) {
        res = -1;
      } else {
        res = 1;
      }
    } else if (cur == 1) {
      if (k == 2) {
        res = -1;
      } else {
        res = 2;
      }
    }
  } else {
    if (cnt[2]) {
      if (k == 1) {
        res = -1;
      } else {
        res = 1;
      }
    } else {
      if (k == 2) {
        res = -1;
      } else {
        res = 2;
      }
    }
  }
  cout << res << endl;
}