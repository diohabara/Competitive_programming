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
  ll int n, m;
  while(cin >> n >> m) {
    ll int gcd = __gcd(n, m);
    ll int lcm = n * m / gcd;
    cout << gcd << ' ' << lcm << endl;
  }
  return 0;
}
