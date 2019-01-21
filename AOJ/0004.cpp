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
  double a, b, c, d, e, f;
  while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
    double y = (c * d- f * a) / (b * d- a * e);
    double x = (c - b * y) / a;
    printf("%0.3f %0.3f\n", x, y);
  }
  return 0;
}
