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
  int N, M;
  cin >> N >> M;
  vector<string> s(M);
  rep(i, M) { cin >> s[i]; }

  // solve
  string str_row = string(N, '.');
  vector<string> str_rows(N, str_row);
  vector<bool> str_used(M, false);
  rep(i, M) {
    rep(sub_i, M) {
      if (s[i].find(s[sub_i]) != string::npos) {
        str_used[sub_i] = true;
      }
    }
  }

  // output
  string result = "";
  rep(i, N) { result = result + str_rows[i] + "\n"; }
  cout << result << endl;
}
