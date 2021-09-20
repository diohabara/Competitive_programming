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
  ll a, b, c;
  cin >> a >> b >> c;

  // solve
  ll res = 1;
  rep(_, b) { res *= c; }
  if (a < res) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
}
