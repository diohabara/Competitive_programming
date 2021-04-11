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
  unordered_set<ll> expressed;
  for (ll a = 2; a * a <= N; a++) {
    ll cur = a;
    while (true) {
      cur *= a;
      if (N < cur) break;
      if (expressed.find(cur) == expressed.end()) expressed.insert(cur);
    }
  }
  cout << N - expressed.size() << endl;
}
