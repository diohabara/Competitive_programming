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
  ll X = 0;
  vector<ll> x(N);
  rep(i, N) {
    ll A, B;
    cin >> A >> B;
    X -= A;
    x[i] = 2 * A + B;
  }

  // solve
  sort(x.begin(), x.end(), greater<ll>());
  ll res = 0;
  for (auto& e : x) {
    X += e;
    res++;
    if (0 < X) {
      cout << res << endl;
      return 0;
    }
  }
}
