#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

string octalise(int decimal) {
  int i = 1, octal = 0;
  while (decimal) {
    octal += (decimal % 8) * i;
    decimal /= 8;
    i *= 10;
  }
  return to_string(octal);
}

int main() {
  // input
  int N;
  cin >> N;

  // solve
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    string ten = to_string(i);
    string oct = octalise(i);
    if (ten.find('7') == string::npos && oct.find('7') == string::npos) cnt++;
  }
  cout << cnt << endl;
}
