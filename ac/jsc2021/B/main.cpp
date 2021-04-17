#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int N, M;
  cin >> N >> M;
  set<int> A, B;
  rep(i, N) {
    int a;
    cin >> a;
    A.insert(a);
  };
  rep(i, M) {
    int b;
    cin >> b;
    B.insert(b);
  }

  // solve
  set<int> res;
  set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(),
                           inserter(res, res.end()));
  if (res.empty()) {
    cout << endl;
    return 0;
  }
  vector<int> v;
  for (auto& e : res) {
    v.push_back(e);
  }
  for (auto i = 0; i < (int)v.size() - 1; i++) {
    cout << v[i] << " ";
  }
  cout << v.back() << endl;
}
