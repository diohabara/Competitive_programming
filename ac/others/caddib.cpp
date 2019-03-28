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
    int n, h, w;
    cin >> n >> h >> w;
    int cnt = 0;
    int a[1010], b[1010];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] >= h && b[i] >= w) {
            cnt++;
        }
    }
    cout << cnt << endl;
	return 0;
}