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
  ll sum_a = 0;
  rep(i, N) {
    cin >> A[i];
    sum_a += A[i];
  }
  ll X;
  cin >> X;

  // solve
  if (X % sum_a == 0) {
    cout << (X / sum_a) * N + 1 << endl;
  } else {
    ll res = (X / sum_a) * N;
    X %= sum_a;
    for (int i = 0; i < N; i++) {
      X -= A[i];
      res++;
      if (X < 0) {
        cout << res << endl;
        return 0;
      }
    }
  }
}
