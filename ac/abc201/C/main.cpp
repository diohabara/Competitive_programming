#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int factorial(const int n) {
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}

int main() {
  // input
  string S;
  cin >> S;

  // solve
  int res = 0;
  rep(i, 10000) {
    vector<bool> has_num(10);
    int tmp = i;
    rep(_, 4) {
      has_num[tmp % 10] = true;
      tmp /= 10;
    }
    bool meet_condition = true;
    rep(j, 10) {
      if (S[j] == 'o' && !has_num[j]) meet_condition = false;
      if (S[j] == 'x' && has_num[j]) meet_condition = false;
    }
    if (meet_condition) res++;
  }
  cout << res << endl;
}
