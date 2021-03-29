#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >>d;
    int tm = min(b, d) - max(a, c);
    if (tm < 0) {
        cout << 0 << endl;
    } else {
        cout << tm << endl;
    }
	return 0;
}