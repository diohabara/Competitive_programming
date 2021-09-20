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
  double T;
  cin >> T;
  double L, X, Y;
  cin >> L >> X >> Y;
  int Q;
  cin >> Q;
  vector<double> E(Q);
  rep(i, Q) { cin >> E[i]; }
  cout << setprecision(15);

  // solve
  rep(i, Q) {
    long double theta = E[i] / T * 2.0 * M_PI;
    long double cx = 0;
    long double cy = -(L / 2.0) * sin(theta);
    long double cz = (L / 2.0) - (L / 2.0) * cos(theta);
    long double d1 = sqrt((cx - X) * (cx - X) + (cy - Y) * (cy - Y));
    long double d2 = cz;
    long double angle = atan2(d2, d1);
    cout << angle * 180.0 / M_PI << endl;
  }
}
