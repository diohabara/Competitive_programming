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
  int Q;
  cin >> Q;

  // solve
  ll sum = 0;
  priority_queue<ll, vector<ll>, greater<ll>> min_heap;
  rep(i, Q) {
    int p;
    cin >> p;
    if (p == 1) {
      ll x;
      cin >> x;
      min_heap.push(x - sum);
    } else if (p == 2) {
      ll x;
      cin >> x;
      sum += x;
    } else {
      cout << min_heap.top() + sum << endl;
      min_heap.pop();
    }
  }
}
