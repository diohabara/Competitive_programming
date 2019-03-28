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
    int l, n, x[200010], now;
    int sum = 0;
    cin >> l >> n;
    int ans[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j <n; j++) {
            sum += (x[i] - x[j]);
            ans[i] = sum;
        }
    }
    sort(ans, ans+sizeof(ans));
    cout << ans[0] << endl;
    return 0;
}