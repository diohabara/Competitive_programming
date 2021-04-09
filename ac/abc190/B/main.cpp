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
  int N, S, D;
  cin >> N >> S >> D;
  vector<int> X(N), Y(N);
  rep(i, N) { cin >> X[i] >> Y[i]; }

  ll res = 0;
  rep(i, N) {
    if (S <= X[i] || Y[i] <= D) continue;
    cout << YES << endl;
    return 0;
  }
  cout << NO << endl;
  return 0;
}
