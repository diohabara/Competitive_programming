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
    int ax, ay, bx, by, t, v;
    cin >> ax >> ay >> bx >> by >> t >> v;
    int n, x[1010], y[1010];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        double dis = pow(pow(ax-x[i], 2.0) + pow(ay-y[i], 2.0), 0.5) + pow(pow(bx-x[i], 2.0) + pow(by-y[i], 2.0), 0.5);
        if (dis <= t * v) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
	return 0;
}