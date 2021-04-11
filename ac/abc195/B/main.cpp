#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int A, B, W;
  cin >> A >> B >> W;

  // solve
  int lower = A, upper = B;
  int minRes = INF, maxRes = -1;
  for (int i = 1; i <= 1000000; i++) {
    if (lower <= W * 1000 && W * 1000 <= upper) {
      minRes = min(minRes, i);
      maxRes = max(maxRes, i);
    }
    lower += A;
    upper += B;
  }
  if (minRes == INF && maxRes == -1) {
    cout << "UNSATISFIABLE" << endl;
  } else {
    cout << minRes << " " << maxRes << endl;
  }
}
