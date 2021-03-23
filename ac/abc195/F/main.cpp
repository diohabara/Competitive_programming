#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve(long long A, long long B) {}

int main() {
  // cout << fixed << setprecision(5);

  long long A;
  scanf("%lld", &A);
  long long B;
  scanf("%lld", &B);
  solve(A, B);
  return 0;
}
