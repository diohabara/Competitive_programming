#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

string convert26(ll n) {
  string ans = "";
  while (0 < n) {
    n--;
    ans += (char)('a' + n % 26);
    n /= 26;
  }
  return ans;
}

int main() {
  // input
  ll N;
  cin >> N;

  // solve
  string s = convert26(N);
  reverse(s.begin(), s.end());
  cout << s << endl;
}
