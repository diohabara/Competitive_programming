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
  ll r1, c1, r2, c2;
  cin >> r1 >> c1;
  cin >> r2 >> c2;

  // solve
  ll r = r2 - r1, c = c2 - c1;
  int res = 3;
  if (!r && !c)
    res = 0;
  else if (r == c || r == -c || abs(r) + abs(c) <= 3)
    res = 1;
  else if ((r + c) % 2 == 0 || abs(r + c) <= 3 || abs(r - c) <= 3 ||
           abs(r) + abs(c) <= 6)
    res = 2;
  cout << res << endl;
}
