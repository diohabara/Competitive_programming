#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int X;
  cin >> X;

  if (X % 100 == 0) {
    cout << 100 << endl;
  } else {
    cout << 100 - X % 100 << endl;
  }
  return 0;
}
