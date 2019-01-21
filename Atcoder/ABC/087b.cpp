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
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int cnt = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (x == 500 * i + 100 * j + 50 * k) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
	return 0;
}