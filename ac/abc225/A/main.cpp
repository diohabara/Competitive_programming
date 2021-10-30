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
  set<char> st;
  for (auto c : S) {
    st.insert(c);
  }
  int size = st.size();
  if (size == 3) {
    cout << 6 << endl;
  } else if (size == 2) {
    cout << 3 << endl;
  } else {
    cout << 1 << endl;
  }
}
