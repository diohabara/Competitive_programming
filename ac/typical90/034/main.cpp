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
  vector<ll> A(N);
  rep(i, N) {
    cin >> A[i];
    A[i]--;
  }

  // solve
  map<int, int> counter;
  int ans = 0;
  int right = 0, cnt = 0;
  for (int left = 0; left < N; left++) {
    while (right < N) {
      if (counter[A[right]] == 0 && cnt == K) {
        break;
      }
      if (counter[A[right]] == 0) {
        cnt++;
      }
      counter[A[right]]++;
      right++;
    }
    ans = max(ans, right - left);
    if (counter[A[left]] == 1) {
      cnt--;
    }
    counter[A[left]]--;
  }
  cout << ans << endl;
}
