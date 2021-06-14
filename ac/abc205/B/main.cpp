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
  vector<int> A(N);
  rep(i, N) { cin >> A[i]; }

  // solve
  vector<int> nums(N);
  iota(nums.begin(), nums.end(), 1);
  sort(A.begin(), A.end());
  rep(i, N) {
    if (A[i] != nums[i]) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
