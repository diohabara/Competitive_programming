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
  vector<int> A(1 << N);
  rep(i, 1 << N) cin >> A[i];
  // solve
  unordered_map<int, int> indexOfRate;
  rep(i, A.size()) { indexOfRate[A[i]] = (i + 1); }

  while (A.size() != 2) {
    vector<int> tmpVec(A.size() / 2);
    for (int i = 0; i < A.size() / 2; i++) {
      tmpVec[i] = max(A[2 * i], A[2 * i + 1]);
    }
    A = tmpVec;
  }
  int lastLoser = *min_element(A.begin(), A.end());
  cout << indexOfRate[lastLoser] << endl;
}
