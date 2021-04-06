#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A;
  rep(i, N) {
    int a;
    cin >> a;
    if (a != X) {
      A.push_back(a);
    }
  }
  if (A.size() == 0) {
    cout << "" << endl;
    return 0;
  }

  rep(i, A.size()) {
    cout << A[i];
    if (i != A.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
