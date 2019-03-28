#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  // input
  int n, m, p, q;
  cin >> n >> m >> p >> q;

  int month = 1, cnt = 0;
  while(true) {
    cnt++;
    if (month == 13) {
      month = 1;
    }
    if ((p <= month) && (month <= q + p - 1)) {
      n -= 2 * m;
    } else {
      n -= m;
    }
    if (n <= 0) {
      cout << cnt << '\n';
      return 0;
    }
    month++;
  }
  return 0;
}
