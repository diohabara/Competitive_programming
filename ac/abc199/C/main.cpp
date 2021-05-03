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
  string S;
  cin >> S;
  int Q;
  cin >> Q;
  vector<int> T(Q), A(Q), B(Q);
  rep(i, Q) {
    cin >> T[i] >> A[i] >> B[i];
    A[i]--, B[i]--;
  }

  // solve
  bool is_flipped = false;
  rep(i, Q) {
    if (T[i] == 1) {
      if (is_flipped) {
        A[i] = (A[i] + N) % (2 * N);
        B[i] = (B[i] + N) % (2 * N);
      }
      swap(S[A[i]], S[B[i]]);
    } else {
      is_flipped ^= 1;
    }
  }
  if (is_flipped) {
    S = S.substr(N) + S.substr(0, N);
  }
  cout << S << endl;
}
