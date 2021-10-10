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
  // vector<pair<int, int>> points(N);
  // for (auto& [x, y] : points) {
  //   cin >> x >> y;
  // }
  vector<ll> X(N), Y(N);
  rep(i, N) { cin >> X[i] >> Y[i]; }

  // solve
  sort(X.begin(), X.end());
  sort(Y.begin(), Y.end());
  ll res = 0;
  ll nx = X[N / 2], ny = Y[N / 2];
  rep(i, N) { res += abs(X[i] - nx) + abs(Y[i] - ny); }
  cout << res << endl;
}