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
  vector<string> S(N);
  for (string& s : S) {
    cin >> s;
  }

  // solve
  ll ans = 1;  // i == 0
  rep(i, N) {
    if (S[i] == "OR") {
      ans += (1 << (i + 1));
    }
  }
  cout << ans << endl;
  return 0;
}
