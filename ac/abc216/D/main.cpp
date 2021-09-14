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

int main() {
  // input
  int N, M;
  cin >> N >> M;

  queue<int> duplicate_fronts;  // indices of the front colors that has the
                                // duplicate
  vector<queue<int>> a(M);      // each balls
  vector<vector<int>> indices_of_front_color(
      N);  // index of front colors of each balls
  rep(i, M) {
    int k;
    cin >> k;
    rep(_, k) {
      int tmp;
      cin >> tmp;
      tmp--;
      a[i].push(tmp);
    }
    indices_of_front_color[a[i].front()].push_back(i);
  }

  // solve
  rep(color_i, N) {
    if (indices_of_front_color[color_i].size() ==
        2) {  // if there the same colors are at front
      duplicate_fronts.push(color_i);
    }
  }
  while (!duplicate_fronts.empty()) {
    int current_duplicate = duplicate_fronts.front();  // get the front color
    duplicate_fronts.pop();
    for (auto index : indices_of_front_color[current_duplicate]) {
      a[index].pop();          // pop the front ball of the same color
      if (a[index].empty()) {  // no balls remain in the i-th cylinder
        continue;
      }
      // push the next front color of the i-th cylinder
      int front_color = a[index].front();
      indices_of_front_color[front_color].push_back(index);
      // if the front color has the duplicate, the this is the next front
      if (indices_of_front_color[front_color].size() == 2) {
        duplicate_fronts.push(front_color);
      }
    }
  }

  for (auto balls : a) {
    if (!balls.empty()) {
      cout << NO << endl;
      return 0;
    }
  }
  cout << YES << endl;
}
