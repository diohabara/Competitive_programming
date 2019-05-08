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
unsigned gcd(unsigned a, unsigned b) {
    while (1) {
        if (a < b) swap(a, b);
        if (!b) break;
        a %= b;
    }
    return a;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll int n, m;
  while(cin >> n >> m) {
    ll gc = gcd(n, m);
    ll lc = n * m / gc;
    cout << gc << ' ' << lc << endl;
  }
  return 0;
}
