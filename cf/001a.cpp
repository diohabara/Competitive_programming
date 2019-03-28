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
  ll int n, m, a;
  cin >> n >> m >> a;
  ll int num = 0;
  num  = ((n + a - 1) / a) * ((m + a - 1) / a);
  cout << num << endl;
  return 0;
}