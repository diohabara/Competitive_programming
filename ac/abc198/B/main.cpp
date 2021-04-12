#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

bool isPalindrome(const string s) {
  for (int i = 0; i < s.size() / 2; ++i) {
    if (s[i] != s[s.size() - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  // input
  string N;
  cin >> N;

  // solve
  if (isPalindrome(N)) {
    cout << "Yes" << endl;
    return 0;
  }

  for (int i = 1; i <= N.size(); ++i) {
    string p = "";
    for (int j = 0; j < i; ++j) {
      p += "0";
    }
    p += N;
    if (isPalindrome(p)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
