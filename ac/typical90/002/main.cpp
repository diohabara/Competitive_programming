#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

void solve(int left, int right, int remain, vector<string>& res, string cur) {
  if (remain == 0) {
    res.push_back(cur);
    return;
  }
  if (0 < left) {
    solve(left - 1, right, remain - 1, res, cur + "(");
  }
  if (0 < right && left < right) {
    solve(left, right - 1, remain - 1, res, cur + ")");
  }
}

int main() {
  // input
  int N;
  cin >> N;

  // solve
  if (N % 2 == 1) {
    cout << endl;
    return 0;
  }
  vector<string> res;
  solve(N / 2, N / 2, N, res, "");
  for (auto& s : res) {
    cout << s << endl;
  }
}
