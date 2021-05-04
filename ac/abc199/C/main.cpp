#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

<<<<<<< HEAD
void flip(string& s, int N) {
  for (int i = 0; i < N; i++) {
    swap(s[i], s[i + N]);
  }
}

=======
>>>>>>> refs/remotes/origin/master
int main() {
  // input
  int N;
  cin >> N;
  string S;
  cin >> S;
<<<<<<< HEAD
  ll Q;
  cin >> Q;
  vector<ll> T(Q), A(Q), B(Q);
=======
  int Q;
  cin >> Q;
  vector<int> T(Q), A(Q), B(Q);
>>>>>>> refs/remotes/origin/master
  rep(i, Q) {
    cin >> T[i] >> A[i] >> B[i];
    A[i]--, B[i]--;
  }

  // solve
<<<<<<< HEAD
  rep(i, Q) {
    if (T[i] == 1) {
      swap(S[A[i]], S[B[i]]);
    } else {
      flip(S, N);
    }
  }
=======
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
>>>>>>> refs/remotes/origin/master
  cout << S << endl;
}
