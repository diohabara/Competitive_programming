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
  int N, K;
  cin >> N >> K;
  vector<ll> A(N), B(N);
  rep(i, N) { cin >> A[i]; }
  rep(i, N) { cin >> B[i]; }

  // solve
  ll diff = 0;
  rep(i, N) { diff += abs(A[i] - B[i]); }
  if (diff <= K && diff % 2 == K % 2) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
}
