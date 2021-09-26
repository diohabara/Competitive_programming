#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll base8_to_int(string N) {
  ll res = 0;
  rep(i, N.size()) { res = res * 8 + int(N[i] - '0'); }
  return res;
}

string int_to_base9(ll N) {
  if (N == 0) {
    return "0";
  }
  string res;
  while (0 < N) {
    res = char(N % 9 + '0') + res;
    N /= 9;
  }
  return res;
}

int main() {
  // input
  string N;
  int K;
  cin >> N >> K;

  // solve
  rep(_, K) {
    N = int_to_base9(base8_to_int(N));
    replace(N.begin(), N.end(), '8', '5');
  }
  cout << N << endl;
}
