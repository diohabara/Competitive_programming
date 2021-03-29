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
    unsigned long long int a, b, x;
    cin >> a >> b >> x;
    if (a%x != 0)
        cout << b/x - a/x << endl;
    else
        cout << b/x - a/x + 1 << endl;
	return 0;
}