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

int main() {
  // input
  int N, K;
  cin >> N >> K;
  vector<ll> c(N);
  rep(i, N) { cin >> c[i]; }

  // solve
  map<int, int> cnt_of_num;
  for (int first = 0; first < K; first++) {
    cnt_of_num[c[first]]++;
  }
  ll res = cnt_of_num.size();
  if (N == K) {
    cout << res << endl;
    return 0;
  }

  ll cur = res;
  for (int last = K; last < N; last++) {
    int first = last - K;
    cnt_of_num[c[first]]--;
    if (cnt_of_num[c[first]] == 0) {
      cur--;
    }
    cnt_of_num[c[last]]++;
    if (cnt_of_num[c[last]] == 1) {
      cur++;
    }
    res = max(res, cur);
  }
  cout << res << endl;
}
