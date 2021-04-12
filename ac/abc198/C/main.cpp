#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  double R, X, Y;
  cin >> R >> X >> Y;

  // solve
  double sqrtDis = sqrt(X * X + Y * Y);
  if (sqrtDis < R) {
    cout << 2 << endl;
    return 0;
  }
  int cnt = 0;
  while (0 < sqrtDis) {
    sqrtDis -= R;
    cnt++;
  }
  cout << cnt << endl;
}
