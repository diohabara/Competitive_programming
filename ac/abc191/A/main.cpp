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
  int V, T, S, D;
  cin >> V >> T >> S >> D;

  if (V * T <= D && D <= V * S) {
    cout << NO << endl;
  } else {
    cout << YES << endl;
  }
  return 0;
}
