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
#define endl '\n'
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, x, y;
    cin >> n >> x >> y;
    int a[100000];
    rep(i, n) {
        cin >> a[i];
    }
    int gap = y - x;
    int ans = 0, less_cnt = 0;

    // if gap < 0, ans = n;
    if (gap < 0) {
        ans = n;
    } else {
        rep(i, n) {
            if (a[i] <= x)
            less_cnt++;
        }
        cout << less_cnt << endl;
        ans = 1 + (less_cnt - 1) / 2;
    }
    cout << ans << endl;
	return 0;
}