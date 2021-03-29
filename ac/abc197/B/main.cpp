#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll H, W, X, Y;
  cin >> H >> W >> Y >> X;
  --X, --Y;
  vector<string> S;
  S.resize(H);
  for (int i = 0; i < H; ++i) {
    cin >> S[i];
  }


  ll cnt = 0;
  for (int x = X; x >= 0; --x) {
    if (S[Y][x] == '.') {
      ++cnt;
    } else {
      break;
    }
  }
  for (int x = X; x < W; ++x) {
    if (S[Y][x] == '.') {
      ++cnt;
    } else {
      break;
    }
  }
  for (int y = Y; y >= 0; --y) {
    if (S[y][X] == '.') {
      ++cnt;
    } else {
      break;
    }
  }
  for (int y = Y; y < H; ++y) {
    if (S[y][X] == '.') {
      ++cnt;
    } else {
      break;
    }
  }

  cout << cnt - 3 << endl;
  return 0;
}
