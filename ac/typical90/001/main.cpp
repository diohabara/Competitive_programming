#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int N, L;
  cin >> N >> L;
  int K;
  cin >> K;
  vector<int> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  ll left = -1;  // possible from here
  ll right = L;  // impossible from here

  /** check if it is possible to divide all elements with min length of a */
  auto check = [&](ll len) -> bool {
    ll cnt = 0;   // count of chopped
    ll prev = 0;  // previous chopped point
    rep(i, N) {
      if (len <= A[i] - prev) {
        cnt++;
        prev = A[i];
      }
    }
    if (len <= L - prev) {
      cnt++;
    }
    return (K + 1 <= cnt);
  };

  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    // if the minimum score is geq mid
    if (check(mid)) {
      left = mid;
    } else {
      right = mid;
    }
  }
  cout << left << endl;
}
