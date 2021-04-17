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
  int X, Y, Z;
  cin >> X >> Y >> Z;

  // solve
  int limit = Y * Z;
  int res = 1;
  while (res * X < limit) {
    res++;
  }
  cout << res - 1 << endl;
}
