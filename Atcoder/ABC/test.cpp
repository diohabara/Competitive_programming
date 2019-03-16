#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define ll long long
using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  string str(10, '#');
  cout << str << endl;
  return 0;
}
