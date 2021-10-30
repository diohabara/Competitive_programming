#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

const string YES = "Yes";
const string NO = "No";

int main() {
  // input
  int N;
  cin >> N;
  vector<int> A(N - 1), B(N - 1);
  rep(i, N - 1) cin >> A[i] >> B[i];

  // solve
  int a = A[0], b = B[0];
  bool ok1 = true, ok2 = true;
  rep(i, N - 1) {
    if (!(A[i] == a || B[i] == a)) {
      ok1 = false;
    }
  }
  rep(i, N - 1) {
    if (!(A[i] == b || B[i] == b)) {
      ok2 = false;
    }
  }
  if (ok1 || ok2)
    cout << YES << endl;
  else
    cout << NO << endl;
}
