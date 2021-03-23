#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve(long long A, long long B, long long W) {
  ll mi = 1e9, ma = 0;
  for (ll i = 0; i <= 1000000; ++i) {
    if (A * i <= W * 1000 && W * 1000 <= B * i) {
      mi = min(mi, i);
      ma = max(ma, i);
    }
  }
  if (ma == 0) {
    cout << "UNSATISFIABLE" << endl;
    return;
  }
  cout << mi << " " << ma << endl;
}

int main() {
  // cout << fixed << setprecision(5);

  long long A;
  scanf("%lld", &A);
  long long B;
  scanf("%lld", &B);
  long long W;
  scanf("%lld", &W);
  solve(A, B, W);
  return 0;
}
