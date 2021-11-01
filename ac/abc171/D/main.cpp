#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  int Q;
  cin >> Q;

  // solve
  map<ll, ll> cntOfNum;
  for (auto& a : A) {
    cntOfNum[a]++;
  }
  ll res = accumulate(A.begin(), A.end(), 0LL);
  rep(i, Q) {
    ll b, c;
    cin >> b >> c;
    res += cntOfNum[b] * (c - b);
    cntOfNum[c] += cntOfNum[b];
    cntOfNum[b] = 0;
    cout << res << endl;
  }
}
