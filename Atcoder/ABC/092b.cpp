#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, d, x, a[101];
    cin >> n >> d >> x;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += (d - 1) / a[i]+ 1;
    }

    cout << ans + x << endl;

	return 0;
}