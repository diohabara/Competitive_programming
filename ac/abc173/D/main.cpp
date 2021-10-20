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
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  // solve
  ll ans = 0;
  sort(A.begin(), A.end(), greater<ll>());
  rep(i, N - 1) ans += A[i - i / 2];
  cout << ans << endl;
}
