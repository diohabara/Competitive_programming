#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    unsigned long int a, b, c;
    cin >> a >> b >> c;

    unsigned long int x = a * b * c;
    unsigned long int divider = pow(10, 9) + 7;
    cout << a * b % divider * c % divider << endl;
	return 0;
}
