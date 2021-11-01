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
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  // solve
  int all = 0;
  for (auto ele : a) {
    all ^= ele;
  }
  rep(i, N) {
    if (i) cout << " ";
    cout << (all ^ a[i]);
  }
  cout << endl;
}
