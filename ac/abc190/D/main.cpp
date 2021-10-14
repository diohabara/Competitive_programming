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
  while (N % 2 == 0) {  // extract all even numbers
    N /= 2;
  }
  ll ans = 0;
  for (ll i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      ans += 2;  // one has two as factor, the other doesn't
    }
    if (i * i == N) {
      ans--;
    }
  }
  cout << 2 * ans << endl;
}
