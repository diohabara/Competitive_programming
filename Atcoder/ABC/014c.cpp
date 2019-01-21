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
  int n;
  cin >> n;
  int t = 1000000;
  int table[t + 2];
  rep(i, t + 1) {
    table[i] = 0;
  }
  int a, b;
  rep(i, n) {
    cin >> a >> b;
    table[a]++;  // 買いたい絵の具のうち最も薄い色
    table[b + 1]--;  // 買いたくない絵の具のうち最も薄い色
  }

  // 買いたいと思われている点をプラスする
  rep(i, t + 1) {
    if (i > 0)
      table[i] += table[i - 1];
  }

  // 最大の被覆点を探す
  int max = 0;
  rep(i, t + 1) {
    if (table[i] > max) {
      max = table[i];
    }
  }

  cout << max << "\n";
  return 0;
}
