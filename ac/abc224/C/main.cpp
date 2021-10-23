#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

// https://www.geeksforgeeks.org/number-of-triangles-that-can-be-formed-with-given-n-points/
int countTriangles(vector<pair<int, int>> P, int N) {
  // Hash Map to store the frequency of
  // slope corresponding to a point (X, Y)
  map<pair<int, int>, int> mp;
  int ans = 0;

  // Iterate over all possible points
  for (int i = 0; i < N; i++) {
    mp.clear();

    // Calculate slope of all elements
    // with current element
    for (int j = i + 1; j < N; j++) {
      int X = P[i].first - P[j].first;
      int Y = P[i].second - P[j].second;

      // find the slope with reduced
      // fraction
      int g = __gcd(X, Y);
      X /= g;
      Y /= g;
      mp[{X, Y}]++;
    }
    int num = N - (i + 1);

    // Total number of ways to form a triangle
    // having one point as current element
    ans += (num * (num - 1)) / 2;

    // Subtracting the total number of ways to
    // form a triangle having the same slope or are
    // collinear
    for (auto j : mp) ans -= (j.second * (j.second - 1)) / 2;
  }
  return ans;
}

int main() {
  // input
  int N;
  cin >> N;
  vector<pair<int, int>> points(N);
  for (auto& [x, y] : points) {
    cin >> x >> y;
  }

  // solve
  cout << countTriangles(points, N) << endl;
}
