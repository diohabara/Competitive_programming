#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int N;
  cin >> N;
  vector<ll> A(N), B(N);
  rep(i, N) { cin >> A[i] >> B[i]; }

  // solve
  ll total = 0;
  rep(i, N) { total += A[i]; }
  vector<ll> comp(N);
  rep(i, N) { comp[i] = 2 * A[i] + B[i]; }
  sort(comp.begin(), comp.end(), greater<ll>());
  rep(i, N) {
    if (total < 0) {
      cout << i << endl;
      return 0;
    }
    total -= comp[i];
  }
  cout << N << endl;
}
