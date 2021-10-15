#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  rep(i, M) cin >> A[i];

  // solve
  sort(A.begin(), A.end());
  // add sentinels
  A.insert(A.begin(), 0);
  A.push_back(N + 1);

  // find the min white length and make the white length vector
  vector<int> white_lengths;
  int min_len = N;
  rep(i, M + 1) {
    int cur_len = A[i + 1] - A[i] - 1;
    if (0 < cur_len) {
      white_lengths.push_back(cur_len);
      min_len = min(min_len, cur_len);
    }
  }
  ll ans = 0;
  rep(i, white_lengths.size()) {
    // floor(white_len / min_len)
    ans += (white_lengths[i] + min_len - 1) / min_len;
  }
  cout << ans << endl;
}
