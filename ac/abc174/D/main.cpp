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
  string S;
  cin >> S;

  // solve
  int left = 0, right = N - 1;
  int cnt = 0;
  // R should be on the left, W should be on the right
  while (left < right) {
    if (S[left] == 'W' && S[right] == 'R') {
      swap(S[left], S[right]);
      left++, right--;
      cnt++;
    } else if (S[left] == 'W' && S[right] == 'W') {
      right--;
    } else if (S[left] == 'R' && S[right] == 'R') {
      left++;
    } else {  // left: R, right: W
      left++, right--;
    }
  }
  cout << cnt << endl;
}
