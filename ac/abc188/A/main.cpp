#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

const string YES = "Yes";
const string NO = "No";

int main() {
  // input
  int X, Y;
  cin >> X >> Y;
  // solve

  if (abs(X - Y) < 3) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
  return 0;
}
