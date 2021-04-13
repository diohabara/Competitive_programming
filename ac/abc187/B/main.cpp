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
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  rep(i, N) { cin >> x[i] >> y[i]; }

  // solve
  int res = 0;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      if (abs(y[j] - y[i]) <= abs(x[j] - x[i])) res++;
    }
  }
  cout << res << endl;
}
