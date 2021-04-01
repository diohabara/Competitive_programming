#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  int A, B;
  cin >> A >> B;
  int solid = A + B;
  if (15 <= solid && 8 <= B) {
    cout << 1 << endl;
  } else if (10 <= solid && 3 <= B) {
    cout << 2 << endl;
  } else if (3 <= solid) {
    cout << 3 << endl;
  } else {
    cout << 4 << endl;
  }
  return 0;
}
