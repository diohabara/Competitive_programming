#include <bits/stdc++.h>
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
  int N;
  cin >> N;
  vector<pair<int, int>> points(N);
  for (auto& [x, y] : points) {
    cin >> x >> y;
  }

  // solve
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        auto [x1, y1] = points[i];
        auto [x2, y2] = points[j];
        auto [x3, y3] = points[k];
        if ((y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1)) {
          puts("Yes");
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
