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
  ll N, M;
  cin >> N >> M;
  vector<ll> A(M), B(M), C(M);
  rep(i, M) {
    cin >> A[i] >> B[i] >> C[i];
    A[i]--;
    B[i]--;
  }

  // solve
  vector<vector<ll>> dist(N, vector<ll>(N, INF));
  ll res = 0;
  rep(i, N) { dist[i][i] = 0; }
  rep(i, M) { dist[A[i]][B[i]] = C[i]; }
  rep(k, N) {
    rep(s, N) {
      rep(t, N) { dist[s][t] = min(dist[s][t], dist[s][k] + dist[k][t]); }
    }
    rep(s, N) {
      rep(t, N) {
        if (dist[s][t] < INF) {
          res += dist[s][t];
        }
      }
    }
  }
  cout << res << endl;
}
