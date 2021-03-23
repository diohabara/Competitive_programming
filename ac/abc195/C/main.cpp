#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve(long long N) {
  ll ans = 0;
  if (1e3 <= N) {
    ans += (N - (1e3 - 1));
  }
  if (1e6 <= N) {
    ans += (N - (1e6 - 1));
  }
  if (1e9 <= N) {
    ans += (N - (1e9 - 1));
  }
  if (1e12 <= N) {
    ans += (N - (1e12 - 1));
  }
  if (1e15 <= N) {
    ans += (N - (1e15 - 1));
  }
  cout << ans << endl;
}

int main() {
  // cout << fixed << setprecision(5);

  long long N;
  scanf("%lld", &N);
  solve(N);
  return 0;
}
