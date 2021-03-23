#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve(long long N, long long S, std::string X) {}

int main() {
  // cout << fixed << setprecision(5);

  long long N;
  scanf("%lld", &N);
  long long S;
  scanf("%lld", &S);
  std::string X;
  std::cin >> X;
  solve(N, S, X);
  return 0;
}
