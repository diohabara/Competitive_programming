#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll factorial(ll n) {
  ll res = 1;
  for (int i = 1; i <= n; ++i) {
    res *= i;
  }
  return res;
}

int main() {
  // input
  ll L;
  cin >> L;

  // solve
  ll res = 1;
  for (int i= 1; i<= 11; ++i) {
    res *= (L-i);
    res /= i;
  }
  cout << res << endl;
}
