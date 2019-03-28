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
    int w, h, n, x[110], y[110], a[110];
    cin >> w >> h >> n;

    int left_x = 0, right_x = w, up_y = h, down_y = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> a[i];
        switch(a[i]) {
            case (1):
            if (left_x < x[i]) left_x = x[i]; break;
            case (2):
            if (right_x > x[i]) right_x = x[i]; break;
            case (3):
            if (down_y < y[i]) down_y = y[i]; break;
            case (4):
            if (up_y > y[i]) up_y = y[i]; break;
        }
    }
    if (right_x - left_x > 0 && up_y - down_y > 0) {
        cout << (right_x - left_x) * (up_y - down_y) << endl;
    } else {
        cout << 0 << endl;
    }
	return 0;
}