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
  vector<int> A(N), B(N), C(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  rep(i, N) cin >> C[i];

  // solve
  vector<ll> cnt_of_a(46), cnt_of_b(46), cnt_of_c(46);
  rep(i, N) {
    cnt_of_a[A[i] % 46]++;
    cnt_of_b[B[i] % 46]++;
    cnt_of_c[C[i] % 46]++;
  }
  ll res = 0;
  rep(i, 46) {
    rep(j, 46) {
      rep(k, 46) {
        if ((i + j + k) % 46 == 0) {
          res += cnt_of_a[i] * cnt_of_b[j] * cnt_of_c[k];
        }
      }
    }
  }
  cout << res << endl;
}
