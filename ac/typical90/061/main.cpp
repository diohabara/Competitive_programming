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
  deque<int> deq;
  rep(i, Q) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      deq.push_front(x);
    } else if (t == 2) {
      deq.push_back(x);
    } else {
      --x;
      cout << deq.at(x) << endl;
    }
  }
}
