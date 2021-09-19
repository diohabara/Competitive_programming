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
  string X;
  cin >> X;
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) { cin >> S[i]; }

  // solve
  map<char, char> index_of_char;
  map<char, char> char_of_index;
  rep(i, X.size()) {
    index_of_char[X[i]] = i;
    char_of_index[i] = X[i];
  }
  vector<string> indices(N);
  rep(i, N) {
    rep(j, S[i].size()) { indices[i] += index_of_char[S[i][j]]; }
  }
  sort(indices.begin(), indices.end());
  rep(i, N) {
    rep(j, indices[i].size()) { cout << char_of_index[indices[i][j]]; }
    cout << "\n";
  }
}
