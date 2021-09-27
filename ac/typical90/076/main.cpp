#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

const string YES = "Yes";
const string NO = "No";

int main() {
  // input
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  ll total = accumulate(A.begin(), A.end(), 0LL);
  A.insert(A.end(), A.begin(), A.end());
  if (total % 10 != 0) {
    cout << NO << endl;
    return 0;
  }
  ll cur_size = A[0];
  int begin = 0, last = 1;
  while (begin < (int)A.size() && last < (int)A.size()) {
    if (cur_size == total / 10) {
      cout << YES << endl;
      return 0;
    } else if (cur_size < total / 10) {
      cur_size += A[last];
      last++;
    } else {
      cur_size -= A[begin];
      begin++;
    }
  }
  cout << NO << endl;
}
