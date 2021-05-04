#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

void flip(string& s, int N) {
  for (int i = 0; i < N; i++) {
    swap(s[i], s[i + N]);
  }
}

int main() {
  // input
  int N;
  cin >> N;
  string S;
  cin >> S;
  ll Q;
  cin >> Q;
  vector<ll> T(Q), A(Q), B(Q);
  rep(i, Q) {
    cin >> T[i] >> A[i] >> B[i];
    A[i]--, B[i]--;
  }

  // solve
  rep(i, Q) {
    if (T[i] == 1) {
      swap(S[A[i]], S[B[i]]);
    } else {
      flip(S, N);
    }
  }
  cout << S << endl;
}
