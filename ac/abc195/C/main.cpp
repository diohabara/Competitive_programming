#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  ll N;
  cin >> N;

  // solve
  ll res = 0;
  if (1000 <= N) {
    res += (N - 1000 + 1);
  }
  if (1000000 <= N) {
    res += (N - 1000000 + 1);
  }
  if (1000000000 <= N) {
    res += (N - 1000000000 + 1);
  }
  if (1000000000000 <= N) {
    res += (N - 1000000000000 + 1);
  }
  if (1000000000000000 <= N) {
    res += (N - 1000000000000000 + 1);
  }
  cout << res << endl;
}
