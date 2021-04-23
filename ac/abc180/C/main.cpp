#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll N;
  cin >> N;

  // solve
  set<ll> s;
  ll sq = (ll)sqrt(N);
  for (ll i = 1; i <= sq; i++) {
    if (N % i == 0) {
      s.insert(i);
      s.insert(N / i);
    }
  }
  for (auto& e : s) {
    cout << e << endl;
  }
}
