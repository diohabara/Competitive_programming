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
  string S;
  cin >> S;

  // solve
  int Y = S.back() - '0';
  cout << S.substr(0, S.size() - 2);
  if (Y <= 2) {
    cout << "-";
  } else if (7 <= Y && Y <= 9) {
    cout << "+";
  }
  cout << endl;
}
