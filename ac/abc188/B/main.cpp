#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

const string YES = "Yes";
const string NO = "No";

int main() {
  // input
  int N;
  cin >> N;
  vector<ll> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];

  // solve
  ll sum = 0;
  rep(i, N) { sum += (A[i] * B[i]); }
  if (sum == 0) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
}
