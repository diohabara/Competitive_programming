#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int N;
  int X;
  cin >> N >> X;
  vector<int> V(N), P(N);
  rep(i, N) { cin >> V[i] >> P[i]; }

  int total = 0;
  rep(i, N) {
    total += V[i] * P[i];
    if (X * 100 < total) {
      cout << (i + 1) << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
