#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int S(int n) {
  int total = 0;
  while (n) {
    total += n % 10;
    n /= 10;
  }
  return total;
}

int main() {
  // input
  int A, B;
  cin >> A >> B;

  // solve
  cout << max(S(A), S(B)) << endl;
}
