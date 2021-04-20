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
  int mod = 0;
  unordered_map<int, int> cntOfMod;
  for (char c : N) {
    int digit = (c - '0') % 3;
    cntOfMod[digit]++;
    mod += digit;
  }
  mod %= 3;

  if (mod == 2) {
    if (cntOfMod[2] && cntOfMod[2] < (int)N.size()) {
      cout << 1 << endl;
      return 0;
    }
    if (2 <= cntOfMod[1] && cntOfMod[1] < (int)N.size()) {
      cout << 2 << endl;
      return 0;
    }
  } else if (mod == 1) {
    if (cntOfMod[1] && cntOfMod[1] < (int)N.size()) {
      cout << 1 << endl;
      return 0;
    }
    if (2 <= cntOfMod[2] && cntOfMod[2] < (int)N.size()) {
      cout << 2 << endl;
      return 0;
    }
  } else {
    cout << 0 << endl;
    return 0;
  }
  cout << -1 << endl;
}
