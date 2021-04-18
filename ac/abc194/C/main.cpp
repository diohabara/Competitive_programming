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
  int N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  // solve
  unordered_map<ll, ll> mp;
  for (auto& a : A) {
    mp[a]++;
  }

  ll res = 0;
  for (auto [key1, val1] : mp) {
    for (auto [key2, val2] : mp) {
      res += (key1 - key2) * (key1 - key2) * val1 * val2;
    }
  }
  cout << res / 2 << endl;
}
