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
    int n, m, a[60], b[60];
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (i+1 == a[j]) {
                cnt++;
            }
            if (i+1 == b[j]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}