#include <bits/stdc++.h>
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
  int N, W;
  cin >> N >> W;
  vector<ll> liter(210000);
  rep(_, N) {
    int s, t, p;
    cin >> s >> t >> p;
    liter[s] += p;
    liter[t] -= p;
  }

  // solve
  rep(i, liter.size() - 1) { liter[i + 1] += liter[i]; }
  rep(i, liter.size()) {
    if (W < liter[i]) {
      cout << NO << endl;
      return 0;
    }
  }
  cout << YES << endl;
}
