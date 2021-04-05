#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

const string YES = "Yes";
const string NO = "No";

bool isOddSmall(const string& s) {
  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 0 && !('a' <= s[i] && s[i] <= 'z')) {
      return false;
    }
  }
  return true;
}

bool isEvenCapital(const string& s) {
  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 1 && !('A' <= s[i] && s[i] <= 'Z')) {
      return false;
    }
  }
  return true;
}

int main() {
  string S;
  cin >> S;

  if (isOddSmall(S) && isEvenCapital(S)) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
  return 0;
}
