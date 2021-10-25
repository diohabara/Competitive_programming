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
  vector<int> p(N);
  rep(i, N) {
    cin >> p[i];
    p[i]--;
  }

  // solve
  vector<int> Q(N);
  rep(i, N) { Q[p[i]] = i + 1; }
  rep(i, N) {
    if (i) {
      cout << " ";
    }
    cout << Q[i];
  }
  cout << endl;
}
