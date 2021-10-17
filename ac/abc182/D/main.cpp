#include <bits/stdc++.h>
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
  ll cumulative_sum = 0;  // the sum until the i-th element
  ll max_on_route = 0;    // the max value of sums until i-th element
  ll total_sum = 0;       // total sum until the i-th step
  rep(i, N) {
    cumulative_sum += A[i];
    max_on_route = max(max_on_route, cumulative_sum);
    ans = max(ans, total_sum + max_on_route);
    total_sum += cumulative_sum;
  }
  cout << ans << endl;
}
