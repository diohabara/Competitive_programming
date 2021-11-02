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
  int N, P;
  cin >> N >> P;
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  // solve
  cout << count_if(a.begin(), a.end(), [&](int e) { return e < P; }) << endl;
}
