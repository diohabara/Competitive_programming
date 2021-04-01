#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  ll res = 0;
  map<ll, ll> cnt;
  for (int i = 0; i < N; ++i) {
    cnt[A[i]]++;
  }
  for (const auto& p1 : cnt) {
    for (const auto& p2 : cnt) {
      if (p1.first <= p2.first) continue;
      res +=
          p1.second * p2.second * (p1.first - p2.first) * (p1.first - p2.first);
    }
  }
  cout << res << endl;
  return 0;
}
