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
    int a, b, c;
    cin >> a >> b >> c;

    int sum = 0;
    sum += b;
    int eatable;
    if ((a + b + 1) >= c) {
        sum += c;
    } else {
        sum += a + b + 1;
    }
    cout << sum << endl;
	return 0;
}