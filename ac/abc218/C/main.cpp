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

const string YES = "Yes";
const string NO = "No";

// rotate matrix clockwise by 90 degrees
void rotate(vector<string>& matrix) {
  reverse(matrix.begin(), matrix.end());
  rep(i, matrix.size()) {
    for (int j = i + 1; j < (int)matrix.size(); j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
}

// the coordinate of the left top '#' in the matrix
pair<int, int> find_left_top(const vector<string>& matrix) {
  rep(i, matrix.size()) {
    rep(j, matrix[i].size()) {
      if (matrix[i][j] == '#') {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

/**
 * #oo
 * ##o
 * ooo
 * ↓
 * ooo
 * o#o
 * o##
 *
 * At this time, [offset_i, offset_j] = [1, 1]
 */
bool is_same_shape(const vector<string>& matrix1,
                   const vector<string>& matrix2) {
  int N = (int)matrix1.size();
  auto [s_i, s_j] = find_left_top(matrix1);
  auto [t_i, t_j] = find_left_top(matrix2);
  // offsets are two coordinate difference of the top two
  auto offset_i = t_i - s_i;
  auto offset_j = t_j - s_j;
  rep(i, N) {
    rep(j, N) {
      auto moved_i = i + offset_i;
      auto moved_j = j + offset_j;
      if (0 <= moved_i && moved_i < N && 0 <= moved_j && moved_j < N) {
        if (matrix1[i][j] != matrix2[moved_i][moved_j]) {  // different figures
          return false;
        }
      } else if (matrix1[i][j] ==
                 '#') {  // if the left-top matrix2's '#' is far away
        return false;
      }
    }
  }
  return true;
}

int main() {
  // input
  int N;
  cin >> N;
  vector<string> S(N);
  vector<string> T(N);
  rep(i, N) { cin >> S[i]; }
  rep(i, N) { cin >> T[i]; }

  // solve
  int cnt_s = 0, cnt_t = 0;  // count of '#'
  rep(i, N) {
    rep(j, N) {
      if (S[i][j] == '#') {
        cnt_s++;
      }
      if (T[i][j] == '#') {
        cnt_t++;
      }
    }
  }
  if (cnt_s != cnt_t) {
    cout << NO << endl;
    return 0;
  }
  rep(_, 4) {
    if (is_same_shape(S, T)) {
      cout << YES << endl;
      return 0;
    }
    rotate(S);
  }
  cout << NO << endl;
}