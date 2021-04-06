#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int countCells(const vector<vector<char>>& cells, const int& i, const int& j) {
  int count = 0;
  for (int y = i; y <= i + 1; y++) {
    for (int x = j; x <= j + 1; x++) {
      if (cells[y][x] == '#') {
        count++;
      }
    }
  }
  return count;
}

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(H, vector<char>(W));
  rep(i, H) {
    rep(j, W) { cin >> S[i][j]; }
  }

  int res = 0;
  rep(i, H - 1) {
    rep(j, W - 1) {
      if (countCells(S, i, j) % 2 == 1 || countCells(S, i, j) % 2 == 3) {
        res++;
      }
    }
  }
  cout << res << endl;
  return 0;
}
