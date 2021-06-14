#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  ll A, B, C;
  cin >> A >> B >> C;

  // solve
  if (C % 2 == 1) {  // odd
    if (0 <= A && 0 <= B) {
      if (abs(A) < abs(B)) {
        puts("<");
      } else if (abs(A) == abs(B)) {
        puts("=");
      } else {
        puts(">");
      }
    } else if (A < 0 && B < 0) {
      if (abs(A) < abs(B)) {
        puts(">");
      } else if (abs(A) == abs(B)) {
        puts("=");
      } else {
        puts("<");
      }
    } else if (0 <= A && B < 0) {
      if (A == B) {
        puts("=");
      } else {
        puts(">");
      }
    } else if (A < 0 && 0 <= B) {
      if (A == B) {
        puts("=");
      } else {
        puts("<");
      }
    }
  } else {  // even
    if (abs(A) < abs(B)) {
      puts("<");
    } else if (abs(A) == abs(B)) {
      puts("=");
    } else {
      puts(">");
    }
  }
}
