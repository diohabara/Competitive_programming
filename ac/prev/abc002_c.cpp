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


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	int x_1 = xb - xa;
	int y_1 = yb - ya;
	int x_2 = xc - xa;
	int y_2 = yc - ya;
	double area = abs(x_1*y_2 - x_2*y_1) / 2.0;
	printf("%f\n", area);
	return 0;
}
