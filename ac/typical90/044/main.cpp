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
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  int shift_cnt = 0;
  rep(_, Q) {
    int T, x, y;
    cin >> T >> x >> y;
    x--, y--;
    if (T == 1) {
      swap(A[(x + shift_cnt) % N], A[(y + shift_cnt) % N]);
    } else if (T == 2) {
      shift_cnt = (shift_cnt + N - 1) % N;
    } else {
      cout << A[(x + shift_cnt) % N] << endl;
    }
  }
}
