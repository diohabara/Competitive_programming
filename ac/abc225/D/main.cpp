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
  int N, Q;
  cin >> N >> Q;

  // solve
  vector<ll> front(N + 1, -1);  // front[a] := b, a is the front of b
  vector<ll> back(N + 1, -1);   // back[a] := b, a is the back of b
  int x, y;
  while (Q--) {
    int c;
    cin >> c;
    if (c == 1) {
      cin >> x >> y;
      back[x] = y;
      front[y] = x;
    } else if (c == 2) {
      cin >> x >> y;
      back[x] = -1;
      front[y] = -1;
    } else {
      cin >> x;
      while (front[x] != -1) {
        x = front[x];
      }
      vector<ll> ans;
      while (x != -1) {
        ans.push_back(x);
        x = back[x];
      }
      cout << ans.size();
      for (ll i = 0; i <= (int)ans.size() - 1; i++) {
        cout << " ";
        cout << ans[i];
      }
      cout << endl;
    }
  }
}
