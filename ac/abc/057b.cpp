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
    int n, m, a[60], b[60], c[60], d[60];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> c[i] >> d[i];
    }
    for (int i = 0; i < n; i++) {
        int point = 1, min = abs(a[i] - c[0]) + abs(b[i] - d[0]);
        for (int j = 1; j < m; j++) {
            if (abs(a[i] - c[j])+abs(b[i] - d[j]) < min) {
                min = abs(a[i] - c[j]) + abs(b[i] - d[j]);
                point = j+1;
            }
        }
        cout << point << endl;
    }
	return 0;
}