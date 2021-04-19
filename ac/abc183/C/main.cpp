#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int N, K;
  cin >> N >> K;
  vector<vector<int>> T(N, vector<int>(N));
  rep(i, N) {
    rep(j, N) { cin >> T[i][j]; }
  }

  // solve
  vector<int> cities(N);
  iota(cities.begin(), cities.end(), 0);
  int cnt = 0;
  do {
    int from = 0;
    int total = 0;
    for (auto to : cities) {
      total += T[from][to];
      from = to;
    }
    total += T[from][0];
    if (total == K) {
      cnt++;
    }
  } while (next_permutation(cities.begin() + 1, cities.end()));
  cout << cnt << endl;
}