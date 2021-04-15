#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

string to_oct(int n) {
  string s;
  while (n) {
    s = to_string(n % 8) + s;
    n /= 8;
  }
  return s;
}

int main() {
  // input
  int N;
  cin >> N;

  // solve
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (to_string(i).find('7') == string::npos &&
        to_oct(i).find('7') == string::npos) {
      cnt++;
    }
  }
  cout << cnt << endl;
}
