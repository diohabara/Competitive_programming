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
  ll r = abs(r1 - r2), c = abs(c1 - c2);
  ll p1 = abs((r1 + c1) - (r2 + c2));
  ll p2 = abs(abs(r1 - c1) - abs(r2 - c2));
  ll res;
  if (r1 == r2 && c1 == c2) {
    res = 0;
  } else if (r + c <= 3 || p1 == 0 || p2 == 0) {
    res = 1;
  } else if (r + c <= 6 || p1 <= 3 || p2 <= 3 ||
             abs(r1 - c1) % 2 == abs(r2 - c2) % 2) {
    res = 2;
  } else {
    res = 3;
  }
  cout << res << endl;
}