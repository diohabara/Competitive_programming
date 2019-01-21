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
  int a, b;
  cin >> a >> b;
  int day = 3;
  for (int i = a; i <= b; i++) {
    if ((i == 23)  || (i == 24) || (i == 25)) {
        day--;
      }
  }
  cout << day << endl;
  return 0;
}
