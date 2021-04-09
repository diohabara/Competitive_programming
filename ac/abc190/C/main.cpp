#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  rep(i, M) { cin >> A[i] >> B[i]; }
  int K;
  cin >> K;
  vector<int> C(K), D(K);
  rep(i, K) { cin >> C[i] >> D[i]; }

  int res = 0;
  for (int mask = 0; mask < (1 << K); mask++) {
    vector<bool> dishes(N + 1);
    rep(i, K) {
      if (mask & (1 << i)) {
        dishes[C[i]] = true;
      } else {
        dishes[D[i]] = true;
      }
    }

    int cnt = 0;
    rep(i, M) {
      if (dishes[A[i]] && dishes[B[i]]) {
        cnt++;
      }
    }
    res = max(res, cnt);
  }
  cout << res << endl;
  return 0;
}
