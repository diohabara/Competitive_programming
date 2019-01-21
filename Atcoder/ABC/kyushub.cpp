#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int q;
    cin >> q;
    rep(i, q) {
        ll int a, b, c;
        cin >> a >> b >> c;
        ll sum = (100 * a + 10 * b + c) / 2;
        // if c is odd, then sum cannot be divided
        if (c % 2 != 0) {
            puts("No");
            continue;
        }

        // subtract a, b, c from sum as much as possible
        // if sum can be paid, sum * 2 (the sum of coins) can be divided by 2
        if (sum <= 100 * a) {
          sum %= 100;
        } else {
          sum -= (100 * a);
        }
        if (sum <= 10 * b) {
          sum %= 10;
        } else {
          sum -= (10 * b);
        }

        // output
        if (sum <= c) {
          puts("Yes");
        } else {
          puts("No");
        }
    }
	return 0;
}
