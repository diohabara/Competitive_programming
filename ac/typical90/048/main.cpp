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
  int N, K;
  cin >> N >> K;
  vector<ll> arr;
  rep(i, N) {
    ll a, b;
    cin >> a >> b;
    arr.push_back(b);
    arr.push_back(a - b);
  }

  // solve
  sort(arr.begin(), arr.end(), greater<ll>());
  ll ans = 0;
  rep(i, K) { ans += arr[i]; }
  cout << ans << endl;
}
