#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll N;
  cin >> N;
  unordered_set<ll> s;
  for (ll a = 2; a * a <= N; a++) {
    ll x = a * a;
    while (x <= N) {
      s.insert(x);
      x *= a;
    }
  }
  cout << N - s.size() << endl;
  return 0;
}
