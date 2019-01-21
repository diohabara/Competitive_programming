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
    int n, t[110], m, p[110], x[110];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> p[i] >> x[i];
    }
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (j == p[i] - 1) {
                sum += x[i];
            }
            else
                sum += t[j];
        }
        cout << sum << endl;
    }

	return 0;
}