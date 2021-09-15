#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N), B(N);
  rep(i, N) { cin >> A[i] >> B[i]; }

  // solve
  auto sorted_A = A, sorted_B = B;
  sort(sorted_A.begin(), sorted_A.end());
  sort(sorted_B.begin(), sorted_B.end());
  sorted_A.erase(unique(sorted_A.begin(), sorted_A.end()), sorted_A.end());
  sorted_B.erase(unique(sorted_B.begin(), sorted_B.end()), sorted_B.end());
  map<int, int> index_of_A, index_of_B;
  rep(i, sorted_A.size()) { index_of_A[sorted_A[i]] = i + 1; }
  rep(i, sorted_B.size()) { index_of_B[sorted_B[i]] = i + 1; }
  rep(i, N) { cout << index_of_A[A[i]] << " " << index_of_B[B[i]] << endl; }
}
