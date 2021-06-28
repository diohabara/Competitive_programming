#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
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
  rep(i, N) { cin >> A[i]; }
  // solve
  ll res = 0;
  map<ll, ll> cnt_of_num;
  rep(i, N) {
    cnt_of_num[A[i]]++;
    res += (i + 1 - cnt_of_num[A[i]]);
  }
  cout << res << endl;
}
