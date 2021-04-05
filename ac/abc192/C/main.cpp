#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll getMax(string s) {
  sort(s.begin(), s.end(), greater<char>());
  return stoll(s);
}

ll getMin(string s) {
  sort(s.begin(), s.end());
  return stoll(s);
}

int main() {
  ll N, K;
  cin >> N >> K;

  ll a = N;
  rep(i, K) { a = getMax(to_string(a)) - getMin(to_string(a)); }
  cout << a << endl;
  return 0;
}
