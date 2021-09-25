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
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  sort(A.begin(), A.end());
  ll cnt = 0;
  for (int i1 = 0; i1 < N - 4; i1++) {
    for (int i2 = i1 + 1; i2 < N - 3; i2++) {
      for (int i3 = i2 + 1; i3 < N - 2; i3++) {
        for (int i4 = i3 + 1; i4 < N - 1; i4++) {
          for (int i5 = i4 + 1; i5 < N; i5++) {
            if ((A[i1] % P * A[i2] % P * A[i3] % P * A[i4] % P * A[i5] % P ==
                 Q)) {
              cnt++;
            }
          }
        }
      }
    }
  }
  cout << cnt << endl;
}
