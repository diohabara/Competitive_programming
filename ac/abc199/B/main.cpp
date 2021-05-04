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
  vector<int> A(N), B(N);
  rep(i, N) { cin >> A[i]; }
  rep(i, N) { cin >> B[i]; }

  // solve
  auto maxA = max_element(A.begin(), A.end());
  auto minB = min_element(B.begin(), B.end());
  cout << max(0, *minB - *maxA + 1) << endl;
}
