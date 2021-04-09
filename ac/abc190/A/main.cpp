#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if (C == 0) {
    if (A <= B) {
      cout << "Aoki" << endl;
    } else {
      cout << "Takahashi" << endl;
    }
  } else {
    if (B <= A) {
      cout << "Takahashi" << endl;
    } else {
      cout << "Aoki" << endl;
    }
  }
  return 0;
}
