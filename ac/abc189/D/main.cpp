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
  /**
   * comb[i][0]: the number of y_i combination of false
   * comb[i][1]: the number of y_i combination of true
   */
  vector<vector<ll>> comb(N + 1, vector<ll>(2, 0));
  comb[0][0] = comb[0][1] = 1;
  for (int i = 1; i <= N; i++) {
    if (S[i - 1] == "OR") {
      comb[i][0] = comb[i - 1][0];
      comb[i][1] = comb[i - 1][0] + 2 * comb[i - 1][1];
    } else {
      comb[i][0] = 2 * comb[i - 1][0] + comb[i - 1][1];
      comb[i][1] = comb[i - 1][1];
    }
  }
  cout << comb[N][1] << endl;
}
