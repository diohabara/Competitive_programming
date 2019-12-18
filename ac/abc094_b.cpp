#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
using namespace std;
#define MAX 1000000

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, m, x;
    cin >> n >> m >> x;
    int a[101];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int left_cost = 0, right_cost = 0;
    for (int i = x; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            if (i == a[j]) left_cost++;
        }
    }
    for (int i = x; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == a[j]) right_cost++;
        }
    }
    int ans = min(left_cost, right_cost);
    cout << ans << endl;
	return 0;
}