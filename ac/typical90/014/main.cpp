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
  int N;
  cin >> N;
  vector<ll> A(N), B(N);
  rep(i, N) { cin >> A[i]; }
  rep(i, N) { cin >> B[i]; }

  // solve
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  ll ans = 0;
  rep(i, N) { ans += abs(A[i] - B[i]); }
  cout << ans << endl;
}
