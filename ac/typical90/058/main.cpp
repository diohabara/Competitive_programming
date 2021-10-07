#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 100000;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll digit_sum(ll n) {
  ll sum = 0;
  while (0 < n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  // input
  ll N, K;
  cin >> N >> K;

  // solve
  vector<int> next(MOD);  // next[i] := i's next number
  rep(i, MOD) next[i] = (i + digit_sum(i)) % MOD;

  vector<int> timestamp(MOD,
                        -1);  // timestamp[i] := the first time that i arrives
  int cur_n = N, cnt = 0;
  //  make timestamps
  while (timestamp[cur_n] == -1) {
    timestamp[cur_n] = cnt;
    cur_n = next[cur_n];
    cnt++;
  }
  ll cycle = cnt - timestamp[cur_n];  // steps it takes to get back to N
  if (timestamp[cur_n] <= K) {
    K = (K - timestamp[cur_n] + cycle) % cycle;  // periodic part
    K += timestamp[cur_n];                       // remainder part
  }
  ll ans = -1;
  rep(i, MOD) {
    if (timestamp[i] == K) {
      ans = i;
    }
  }
  cout << ans << endl;
}
