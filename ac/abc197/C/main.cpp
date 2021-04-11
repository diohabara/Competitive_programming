#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];

  // solve
  int minXorSum = INF;
  for (int mask = 0; mask < 1 << (N - 1); mask++) {
    int xorSum = 0;
    int orSum = 0;
    for (int pos = 0; pos <= N; pos++) {
      if (pos < N) {
        orSum |= A[pos];
      }
      if ((mask >> pos & 1) || pos == N) {
        xorSum ^= orSum;
        orSum = 0;
      }
    }
    minXorSum = min(minXorSum, xorSum);
  }
  cout << minXorSum << endl;
}
