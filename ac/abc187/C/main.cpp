#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  // input
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];

  // solve
  unordered_set<string> bangWords;
  rep(i, N) {
    if (S[i][0] == '!') {
      bangWords.insert(S[i].substr(1, S.size() - 1));
    }
  }
  rep(i, N) {
    if (S[i][0] != '!') {
      if (bangWords.find(S[i]) != bangWords.end()) {
        cout << S[i] << endl;
        return 0;
      }
    }
  }
  cout << "satisfiable" << endl;
}
