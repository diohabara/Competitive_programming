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
    int w, a, b;
    cin >> w >> a >> b;
    if (abs(a-b) < w) {
        cout << 0 << endl;
    }
    else {
        cout << min(abs(b+w-a), abs(a+w-b)) << endl;
    }
	return 0;
}