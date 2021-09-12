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
  int N;
  cin >> N;
  set<pair<int, int>> points;
  rep(i, N) {
    int x, y;
    cin >> x >> y;
    points.insert({x, y});
  }

  // solve
  int answer = 0;
  for (auto i = points.begin(); i != std::prev(points.end()); i++) {
    for (auto j = next(i); j != points.end(); j++) {
      pair<int, int> p1 = *i;
      pair<int, int> p2 = *j;

      if (p1.first == p2.first || p1.second == p2.second) continue;

      pair<int, int> p3 = make_pair(p1.first, p2.second);
      pair<int, int> p4 = make_pair(p2.first, p1.second);

      if (points.find(p3) != points.end() && points.find(p4) != points.end())
        ++answer;
    }
  }
  cout << answer / 2 << endl;
}
